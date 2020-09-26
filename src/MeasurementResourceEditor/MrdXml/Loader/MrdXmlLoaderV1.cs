﻿///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia and QIF Resources contributors
/// https://www.capvidia.com/
/// 
/// This software is provided for free use to the QIF Community under the 
/// following license:
/// 
/// Boost Software License - Version 1.0 - August 17th, 2003
/// https://www.boost.org/LICENSE_1_0.txt
/// 
/// Permission is hereby granted, free of charge, to any person or organization
/// obtaining a copy of the software and accompanying documentation covered by
/// this license (the "Software") to use, reproduce, display, distribute,
/// execute, and transmit the Software, and to prepare derivative works of the
/// Software, and to permit third-parties to whom the Software is furnished to
/// do so, all subject to the following:
/// 
/// The copyright notices in the Software and this entire statement, including
/// the above license grant, this restriction and the following disclaimer,
/// must be included in all copies of the Software, in whole or in part, and
/// all derivative works of the Software, unless such copies or derivative
/// works are solely in the form of machine-executable object code generated by
/// a source language processor.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
/// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
/// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
/// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Xml;
using System.Text.RegularExpressions;
using System.Linq;
using Qif;

namespace MeasurementResourceEditor.MrdXml
{
    /// <summary> Loader of MRD documents of version 1. </summary>
    internal class MrdXmlLoaderV1 : AMrdXmlLoader
    {
        #region Constructor

        /// <summary> Constructor. </summary>
        public MrdXmlLoaderV1(XmlDocument doc)
            : base(doc)
        {
        }
        #endregion

        #region ==== IMrdXmlLoader Implementation ====

        ///<summary> Loads an MRD file of version 1. </summary>
        /// <param name="rootElement"> Root element </param>
        /// <returns> Loaded CMMs </returns>
        public override List<CmmParameters> Load(XmlElement rootElement)
        {
            List<CmmParameters> loadedCmms = new List<CmmParameters>();

            // Iterate through each CMM node
            XmlNodeList cmmNodes = rootElement.SelectNodes("Cmm");
            foreach (XmlNode cmmXmlNode in cmmNodes)
            {
                // Load the CMM node and add it to the list
                CmmParameters cmm = LoadCmmXmlNode(cmmXmlNode);
                loadedCmms.Add(cmm);
            }

            return loadedCmms;
        }
        #endregion

        #region ---- private load methods ----

        ///<summary> Loads a CMM XML node, and populate a corresponding CmmParameters object. </summary>
        /// <param name="node"> The CMM XmlNode to load </param>
        /// <returns> A fully populated CmmParameters object that corresponds to the data in the node </returns>
        private CmmParameters LoadCmmXmlNode(XmlNode node)
        {
            CmmParameters cmmParameters = CmmParameters.CreateNewCmmParameters();

            // CMM Name
            cmmParameters.Name = GetSingleValue(node, "Name");

            // CMM Extents: Zero
            List<double> zero = new List<double>();
            zero.Add(GetSingleDAttributeValue(node, "Zero", "X"));
            zero.Add(GetSingleDAttributeValue(node, "Zero", "Y"));
            zero.Add(GetSingleDAttributeValue(node, "Zero", "Z"));
            cmmParameters.Zero = zero;

            // CMM Extents: Maximum Extents
            List<double> extents = new List<double>();
            extents.Add(GetSingleDAttributeValue(node, "Extents", "X"));
            extents.Add(GetSingleDAttributeValue(node, "Extents", "Y"));
            extents.Add(GetSingleDAttributeValue(node, "Extents", "Z"));
            cmmParameters.Extents = extents;

            // Environment Data
            LoadEnvironmentData(node, cmmParameters);

            // ActivePerformanceTest
            cmmParameters.ActivePerformanceTest = ToCmmPerformanceTest(GetSingleValue(node, "ActivePerformanceTest"));

            // B89 values
            cmmParameters.B89Results = LoadCmmB89XmlNode(node);

            // ISO 10360 values
            cmmParameters.Iso10360Results = LoadCmmIso10360Node(node);

            // Load a Rotary Table, if it is there
            LoadCmmRotaryTable(ref cmmParameters, node);

            // Load up new Sensors
            XmlNodeList sensorNodes = node.SelectNodes("Sensor");
            foreach (XmlNode sensorNode in sensorNodes)
            {
                SensorParameters sensor = LoadSensorXmlNode(sensorNode);
                cmmParameters.AddSensor(sensor);
            }

            return cmmParameters;
        }

        ///<summary> Loads the environment data from the given node into the given CmmParameters object. </summary>
        /// <param name="node"> XML node </param>
        /// <param name="cmmParameters"> CMM to fill </param>
        private void LoadEnvironmentData(XmlNode node, CmmParameters cmmParameters)
        {
            // Get the type of CMM Scales
            cmmParameters.CmmScales = ToCmmScalesType(GetSingleValue(node, "CmmScales"));

            if (cmmParameters.CmmScales == CmmScalesType.Standard)
            {
                // Load values specific to Standard Scales
                cmmParameters.CmmTemperature = GetSingleDValue(node, "CmmTemperature");
                cmmParameters.CmmTemperatureUncertainty = GetSingleDValue(node, "CmmTemperatureUncertainty");
                cmmParameters.CmmExpansionCoefficient = GetSingleDValue(node, "CmmExpansionCoefficient");
                cmmParameters.CmmExpansionCoefficientUncertainty = GetSingleDValue(node, "CmmExpansionCoefficientUncertainty");
            }
            else if (cmmParameters.CmmScales == CmmScalesType.Laser)
            {
                // Load the values specific to laser scales.
                cmmParameters.CmmLaserAirTemperature = GetSingleDValue(node, "CmmLaserAirTemperature");
                cmmParameters.CmmLaserAirTemperatureUncertainty = GetSingleDValue(node, "CmmLaserAirTemperatureUncertainty");
                cmmParameters.CmmLaserAirPressure = GetSingleDValue(node, "CmmLaserAirPressure");
                cmmParameters.CmmLaserAirPressureUncertainty = GetSingleDValue(node, "CmmLaserAirPressureUncertainty");
                cmmParameters.CmmLaserAirHumidity = GetSingleDValue(node, "CmmLaserAirHumidity");
                cmmParameters.CmmLaserAirHumidityUncertainty = GetSingleDValue(node, "CmmLaserAirHumidityUncertainty");
            }
            else throw new ApplicationException("Unknown CMM Scales Type");

            // Get the compensation type
            cmmParameters.CmmSoftwareCompensation = ToCmmSoftwareCompensationType(GetSingleValue(node, "CmmSoftwareCompensation"));
        }

        ///<summary> Will Load a B89 node and populate a CmmErrorB89 object with the values found. </summary>
        /// <param name="node"> The node that owns the B89 XmlNode we wish to load </param>
        /// <returns> A CmmErrorB89 object initialized to the loaded XML values </returns>
        private CmmErrorB89 LoadCmmB89XmlNode(XmlNode node)
        {
            // Open the B89 node
            XmlNode b89Node = node.SelectSingleNode("B89");
            if (b89Node == null)
                return null;

            CmmErrorB89 b89 = new CmmErrorB89();
            b89.XLinearAccuracy = GetSingleDValue(b89Node, "XLinearAccuracy");
            b89.YLinearAccuracy = GetSingleDValue(b89Node, "YLinearAccuracy");
            b89.ZLinearAccuracy = GetSingleDValue(b89Node, "ZLinearAccuracy");
            b89.OffsetVolumetricPerformance = GetSingleDValue(b89Node, "OffsetVolumetricPerformance");
            b89.VolumetricPerformance = GetSingleDValue(b89Node, "VolumetricPerformance");
            b89.Repeatability = GetSingleDValue(b89Node, "Repeatability");
            return b89;
        }

        ///<summary> Will load an iso10360 CMM node and populate a CmmErrorIso10360 object with the values found. </summary>
        /// <param name="node"> XML node  </param>
        /// <returns> Loaded ISO 10360 performance test </returns>
        private CmmErrorIso10360 LoadCmmIso10360Node(XmlNode node)
        {
            // Open the ISO 10360 node
            XmlNode isoNode = node.SelectSingleNode("Iso10360");
            if (isoNode == null)
                return null;

            // Create our ISO 10360 parameters
            CmmErrorIso10360 iso = new CmmErrorIso10360();

            // Get artifact type and error of indication type
            iso.Artifact = ToIso10360ArtifactType(GetSingleValue(isoNode, "ArtifactType"));
            iso.ErrorOfIndicationType = ToIso10360ErrorType(GetSingleValue(isoNode, "ErrorOfIndicationType"));

            // Get error of indication values.
            List<double> errorOfIndicationValues = GetSingleDValueList(isoNode, "ErrorOfIndication");
            if (errorOfIndicationValues.Count < 1 || errorOfIndicationValues.Count > 3)
                throw new ApplicationException("Error reading Error of Indication value for ISO 10360 CMM.");
            iso.ErrorOfIndicationValue1 = errorOfIndicationValues[0];
            if (errorOfIndicationValues.Count > 1)
                iso.ErrorOfIndicationValue2 = errorOfIndicationValues[1];
            if (errorOfIndicationValues.Count > 2)
                iso.ErrorOfIndicationValue3 = errorOfIndicationValues[2];

            // Now read the artifact positions
            XmlNodeList positionNodes = isoNode.SelectNodes("ArtifactPosition");
            for (int i = 0; i < positionNodes.Count; i++)
            {
                iso.ArtifactPositionValue(i, ToIso10360ArtifactPosition(GetSingleValue(positionNodes[i], "Position")));
                if (iso.Artifact == CmmErrorIso10360.ArtifactType.GageBlocks)
                    iso.GageBlockStackingValue(i, ToIso10360GageBlockStacking(GetSingleValue(positionNodes[i], "StackingOrder")));
            }

            return iso;
        }

        ///<summary> Loads a rotary table node if there is one in the given CMM node.  If not, sets the HasRotaryTable value to false. </summary>
        /// <param name="param"> A reference to the CmmParameters object we are building </param>
        /// <param name="node"> The CMM XmlNode </param>
        private void LoadCmmRotaryTable(ref CmmParameters param, XmlNode node)
        {
            // See if this CMM has a rotary table
            XmlNode rotaryTableNode = node.SelectSingleNode("RotaryTable");
            if (rotaryTableNode == null)
            {
                param.HasRotaryTable = false;
                return;
            }

            // This CMM has a rotary table, so load the values.  Start with radius and origin
            param.HasRotaryTable = true;
            param.RotaryTableRadius = GetSingleDValue(rotaryTableNode, "Radius");
            param.RotaryTableXOrigin = GetSingleDAttributeValue(rotaryTableNode, "Origin", "X");
            param.RotaryTableYOrigin = GetSingleDAttributeValue(rotaryTableNode, "Origin", "Y");
            param.RotaryTableZOrigin = GetSingleDAttributeValue(rotaryTableNode, "Origin", "Z");

            // Axis direction
            List<double> axisDirection = new List<double>();
            axisDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "AxisDirection", "X"));
            axisDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "AxisDirection", "Y"));
            axisDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "AxisDirection", "Z"));
            if (IsValidRotaryTableAxisDirection(axisDirection))
                param.RotaryTableAxisDirection = axisDirection;
            else
                throw new ApplicationException("Invalid RotaryTable AxisDirection");

            // ZeroIndex Direction
            List<double> zeroIndexDirection = new List<double>();
            zeroIndexDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "ZeroIndexDirection", "X"));
            zeroIndexDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "ZeroIndexDirection", "Y"));
            zeroIndexDirection.Add(GetSingleDAttributeValue(rotaryTableNode, "ZeroIndexDirection", "Z"));
            if (IsValidUnitVector(zeroIndexDirection))
                param.RotaryTableZeroIndexDirection = zeroIndexDirection;
            else
                throw new ApplicationException("Invalid RotaryTable ZeroIndexDirection");

            // Error parameters
            param.RotaryTableAxialError = GetSingleDAttributeValue(rotaryTableNode, "Error", "Axial");
            param.RotaryTableRadialError = GetSingleDAttributeValue(rotaryTableNode, "Error", "Radial");
            param.RotaryTableTangentialError = GetSingleDAttributeValue(rotaryTableNode, "Error", "Tangential");
        }

        ///<summary> Load a Sensor XML node, and populate a corresponding SensorParameters object. </summary>
        /// <param name="node"> The Sensor XmlNode to load </param>
        /// <returns> A fully populated SensorParameters object that corresponds to the data in the node </returns>
        private SensorParameters LoadSensorXmlNode(XmlNode node)
        {
            SensorParameters sensorParameters = SensorParameters.CreateNewSensorParameters();

            // Sensor Name
            sensorParameters.Name = GetSingleValue(node, "Name");

            // SensorType
            sensorParameters.Type = ToSensorType(GetSingleValue(node, "SensorType"));

            // SensorTechnology
            sensorParameters.Technology = ToSensorTechnology(GetSingleValue(node, "SensorTechnology"));

            // ActivePerformanceTest
            sensorParameters.ActivePerformanceTest = ToSensorPerformanceTest(GetSingleValue(node, "ActivePerformanceTest"));

            // Get the performance test data.
            sensorParameters.PerformanceTestIso10360 = GetSingleDValueList(node, "Iso10360");
            sensorParameters.PerformanceTestB89 = GetSingleDValueList(node, "B89");
            sensorParameters.PerformanceTestVdiVde = GetSingleDValueList(node, "VdiVde");
            sensorParameters.PerformanceTestSpecifiedStandardDeviation = GetSingleDValueList(node, "SpecifiedStandardDeviation");

            // Get the stylus lengths
            sensorParameters.StylusLengths = LoadStylusDefinitionsXmlNode(node);

            // Get the extension length
            sensorParameters.ExtensionLength = GetSingleDAttributeValue(node, "Extension", "Length");

            return sensorParameters;
        }

        ///<summary> Loads up the stylus lengths from the given StylusDefinitions node. </summary>
        /// <param name="node"> The node that owns the StylusDefinitions node we wish to load </param>
        /// <returns> A list of doubles contained in the StylusDefinitions node </returns>
        private List<double> LoadStylusDefinitionsXmlNode(XmlNode node)
        {
            // Open the StylusDefinitions node
            XmlNode stylusDefinitionsNode = node.SelectSingleNode("StylusDefinitions");
            if (stylusDefinitionsNode == null)
                throw new ApplicationException("No StylusDefinitions found.");

            // Loop through each Stylus node within the StylusDefinitions
            List<double> stylusLengths = new List<double>();
            XmlNodeList stylusNodes = stylusDefinitionsNode.SelectNodes("Stylus");
            foreach (XmlNode stylusNode in stylusNodes)
            {
                XmlAttributeCollection attributes = stylusNode.Attributes;
                if (attributes != null)
                {
                    XmlNode attributeNode = attributes.GetNamedItem("Length");
                    if (attributeNode != null)
                    {
                        if (!Utilities.TryParseDouble(attributeNode.Value, out var length))
                            throw new ApplicationException("Error parsing value: " + attributeNode.Value + " in <StylusDefinitions>");
                        stylusLengths.Add(length);
                    }
                }
            }
            return stylusLengths;
        }
        #endregion

        #region ---- private value verification methods ----

        ///<summary> Determines if the given value is a valid unit vector. </summary>
        /// <param name="vector"> Unit vector to check </param>
        /// <returns> True if the vector is valid, otherwise false </returns>
        private bool IsValidUnitVector(List<double> vector)
        {
            // There must be 3 values
            if (vector.Count != 3)
                return false;

            // Values must add up to one (or close)
            double sum = vector[0] + vector[1] + vector[2];
            if (sum > 0.99 && sum < 1.01)
                return true;
            return false;
        }

        ///<summary> Determines if the given list of doubles is a valid Rotary Table Axis Direction. </summary>
        /// <param name="axisDirection"> The list of doubles to check </param>
        /// <returns> True if value is valid </returns>
        private bool IsValidRotaryTableAxisDirection(List<double> axisDirection)
        {
            // There must be 3 values
            if (axisDirection.Count != 3)
                return false;

            // The vector must be orthogonal to an axis direction.  So must be 1,0,0 or 0,1,0 or 0,0,1
            if (Math.Abs(axisDirection[0]) == 1)
                if (axisDirection[1] != 0 && axisDirection[2] != 0)
                    return false;
            if (Math.Abs(axisDirection[1]) == 1)
                if (axisDirection[0] != 0 && axisDirection[2] != 0)
                    return false;
            if (Math.Abs(axisDirection[2]) == 1)
                if (axisDirection[0] != 0 && axisDirection[1] != 0)
                    return false;

            return true;
        }
        #endregion

        #region ---- private conversion methods ----

        ///<summary> Converts the given string to a CmmScalesType enumeration type. </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmScalesType ToCmmScalesType(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "standard":
                    return CmmScalesType.Standard;
                case "laser":
                    return CmmScalesType.Laser;
            }
            throw new ArgumentException("Unknown CMM scales type: " + value);
        }

        ///<summary> Converts the given string to a CmmSoftwareCompensationType enum type. </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmSoftwareCompensationType ToCmmSoftwareCompensationType(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "nocompensation":
                    return CmmSoftwareCompensationType.NoCompensation;
                case "cmmonly":
                    return CmmSoftwareCompensationType.CmmOnly;
                case "singletemperatureassumed":
                    return CmmSoftwareCompensationType.SingleTemperatureAssumed;
                case "fullcompensation":
                    return CmmSoftwareCompensationType.FullCompensation;
            }
            throw new ArgumentException("Unknown CMM software compensation type: " + value);
        }

        ///<summary> Converts the given string to a Cmm.PerformanceTest enumeration. </summary>
        /// <param name="value"> The string to convert </param>
        /// <returns> The corresponding Cmm.PerformanceTest </returns>
        CmmPerformanceTest ToCmmPerformanceTest(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "b89":
                    return CmmPerformanceTest.B89;
                case "iso10360":
                    return CmmPerformanceTest.Iso10360;
                case "perfectcmm":
                    return CmmPerformanceTest.None;
            }
            throw new ArgumentException("Unknown performance test type: " + value);
        }

        ///<summary> Converts from a string to a CmmErrorIso10360.ArtifactType </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmErrorIso10360.ArtifactType ToIso10360ArtifactType(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "gageblocks":
                    return CmmErrorIso10360.ArtifactType.GageBlocks;
                case "stepgage":
                    return CmmErrorIso10360.ArtifactType.StepGage;
            }
            throw new ArgumentException("Unknown Iso10360 CMM performance test artifact type.");
        }

        ///<summary> Converts from a string to a CmmErrorIso10360.ArtifactPosition </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmErrorIso10360.ArtifactPosition ToIso10360ArtifactPosition(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "unknown":
                    return CmmErrorIso10360.ArtifactPosition.Unknown;
                case "1}2":
                    return CmmErrorIso10360.ArtifactPosition.p1r2;
                case "1{}2":
                    return CmmErrorIso10360.ArtifactPosition.p1c2;
                case "1{2":
                    return CmmErrorIso10360.ArtifactPosition.p1l2;
                case "1}3":
                    return CmmErrorIso10360.ArtifactPosition.p1r3;
                case "1{}3":
                    return CmmErrorIso10360.ArtifactPosition.p1c3;
                case "1{3":
                    return CmmErrorIso10360.ArtifactPosition.p1l3;
                case "1}4":
                    return CmmErrorIso10360.ArtifactPosition.p1r4;
                case "1{}4":
                    return CmmErrorIso10360.ArtifactPosition.p1c4;
                case "1{4":
                    return CmmErrorIso10360.ArtifactPosition.p1l4;
                case "1}5":
                    return CmmErrorIso10360.ArtifactPosition.p1r5;
                case "1{}5":
                    return CmmErrorIso10360.ArtifactPosition.p1c5;
                case "1{5":
                    return CmmErrorIso10360.ArtifactPosition.p1l5;
                case "1}6":
                    return CmmErrorIso10360.ArtifactPosition.p1r6;
                case "1{}6":
                    return CmmErrorIso10360.ArtifactPosition.p1c6;
                case "1{6":
                    return CmmErrorIso10360.ArtifactPosition.p1l6;
                case "1}7":
                    return CmmErrorIso10360.ArtifactPosition.p1r7;
                case "1{}7":
                    return CmmErrorIso10360.ArtifactPosition.p1c7;
                case "1{7":
                    return CmmErrorIso10360.ArtifactPosition.p1l7;
                case "1}8":
                    return CmmErrorIso10360.ArtifactPosition.p1r8;
                case "1{}8":
                    return CmmErrorIso10360.ArtifactPosition.p1c8;
                case "1{8":
                    return CmmErrorIso10360.ArtifactPosition.p1l8;
                case "2}3":
                    return CmmErrorIso10360.ArtifactPosition.p2r3;
                case "2{}3":
                    return CmmErrorIso10360.ArtifactPosition.p2c3;
                case "2{3":
                    return CmmErrorIso10360.ArtifactPosition.p2l3;
                case "2}4":
                    return CmmErrorIso10360.ArtifactPosition.p2r4;
                case "2{}4":
                    return CmmErrorIso10360.ArtifactPosition.p2c4;
                case "2{4":
                    return CmmErrorIso10360.ArtifactPosition.p2l4;
                case "2}5":
                    return CmmErrorIso10360.ArtifactPosition.p2r5;
                case "2{}5":
                    return CmmErrorIso10360.ArtifactPosition.p2c5;
                case "2{5":
                    return CmmErrorIso10360.ArtifactPosition.p2l5;
                case "2}6":
                    return CmmErrorIso10360.ArtifactPosition.p2r6;
                case "2{}6":
                    return CmmErrorIso10360.ArtifactPosition.p2c6;
                case "2{6":
                    return CmmErrorIso10360.ArtifactPosition.p2l6;
                case "2}7":
                    return CmmErrorIso10360.ArtifactPosition.p2r7;
                case "2{}7":
                    return CmmErrorIso10360.ArtifactPosition.p2c7;
                case "2{7":
                    return CmmErrorIso10360.ArtifactPosition.p2l7;
                case "2}8":
                    return CmmErrorIso10360.ArtifactPosition.p2r8;
                case "2{}8":
                    return CmmErrorIso10360.ArtifactPosition.p2c8;
                case "2{8":
                    return CmmErrorIso10360.ArtifactPosition.p2l8;
                case "3}4":
                    return CmmErrorIso10360.ArtifactPosition.p3r4;
                case "3{}4":
                    return CmmErrorIso10360.ArtifactPosition.p3c4;
                case "3{4":
                    return CmmErrorIso10360.ArtifactPosition.p3l4;
                case "3}5":
                    return CmmErrorIso10360.ArtifactPosition.p3r5;
                case "3{}5":
                    return CmmErrorIso10360.ArtifactPosition.p3c5;
                case "3{5":
                    return CmmErrorIso10360.ArtifactPosition.p3l5;
                case "3}6":
                    return CmmErrorIso10360.ArtifactPosition.p3r6;
                case "3{}6":
                    return CmmErrorIso10360.ArtifactPosition.p3c6;
                case "3{6":
                    return CmmErrorIso10360.ArtifactPosition.p3l6;
                case "3}7":
                    return CmmErrorIso10360.ArtifactPosition.p3r7;
                case "3{}7":
                    return CmmErrorIso10360.ArtifactPosition.p3c7;
                case "3{7":
                    return CmmErrorIso10360.ArtifactPosition.p3l7;
                case "3}8":
                    return CmmErrorIso10360.ArtifactPosition.p3r8;
                case "3{}8":
                    return CmmErrorIso10360.ArtifactPosition.p3c8;
                case "3{8":
                    return CmmErrorIso10360.ArtifactPosition.p3l8;
                case "4}5":
                    return CmmErrorIso10360.ArtifactPosition.p4r5;
                case "4{}5":
                    return CmmErrorIso10360.ArtifactPosition.p4c5;
                case "4{5":
                    return CmmErrorIso10360.ArtifactPosition.p4l5;
                case "4}6":
                    return CmmErrorIso10360.ArtifactPosition.p4r6;
                case "4{}6":
                    return CmmErrorIso10360.ArtifactPosition.p4c6;
                case "4{6":
                    return CmmErrorIso10360.ArtifactPosition.p4l6;
                case "4}7":
                    return CmmErrorIso10360.ArtifactPosition.p4r7;
                case "4{}7":
                    return CmmErrorIso10360.ArtifactPosition.p4c7;
                case "4{7":
                    return CmmErrorIso10360.ArtifactPosition.p4l7;
                case "4}8":
                    return CmmErrorIso10360.ArtifactPosition.p4r8;
                case "4{}8":
                    return CmmErrorIso10360.ArtifactPosition.p4c8;
                case "4{8":
                    return CmmErrorIso10360.ArtifactPosition.p4l8;
                case "5}6":
                    return CmmErrorIso10360.ArtifactPosition.p5r6;
                case "5{}6":
                    return CmmErrorIso10360.ArtifactPosition.p5c6;
                case "5{6":
                    return CmmErrorIso10360.ArtifactPosition.p5l6;
                case "5}7":
                    return CmmErrorIso10360.ArtifactPosition.p5r7;
                case "5{}7":
                    return CmmErrorIso10360.ArtifactPosition.p5c7;
                case "5{7":
                    return CmmErrorIso10360.ArtifactPosition.p5l7;
                case "5}8":
                    return CmmErrorIso10360.ArtifactPosition.p5r8;
                case "5{}8":
                    return CmmErrorIso10360.ArtifactPosition.p5c8;
                case "5{8":
                    return CmmErrorIso10360.ArtifactPosition.p5l8;
                case "6}7":
                    return CmmErrorIso10360.ArtifactPosition.p6r7;
                case "6{}7":
                    return CmmErrorIso10360.ArtifactPosition.p6c7;
                case "6{7":
                    return CmmErrorIso10360.ArtifactPosition.p6l7;
                case "6}8":
                    return CmmErrorIso10360.ArtifactPosition.p6r8;
                case "6{}8":
                    return CmmErrorIso10360.ArtifactPosition.p6c8;
                case "6{8":
                    return CmmErrorIso10360.ArtifactPosition.p6l8;
                case "7}8":
                    return CmmErrorIso10360.ArtifactPosition.p7r8;
                case "7{}8":
                    return CmmErrorIso10360.ArtifactPosition.p7c8;
                case "7{8":
                    return CmmErrorIso10360.ArtifactPosition.p7l8;
            }
            throw new ArgumentException("Unknown Iso10360 CMM performance test artifact position.");
        }

        ///<summary> Converts from a string to a CmmErrorIso10360.ErrorType </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmErrorIso10360.ErrorType ToIso10360ErrorType(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "onevalue":
                    return CmmErrorIso10360.ErrorType.OneValue;
                case "twovalues":
                    return CmmErrorIso10360.ErrorType.TwoValues;
                case "threevalues":
                    return CmmErrorIso10360.ErrorType.ThreeValues;
            }
            throw new ArgumentException("Unknown Iso10360 CMM performance test error type: " + value);
        }

        /// <summary> Converts from a string to a gage block stacking. </summary>
        /// <param name="value"> String </param>
        /// <returns> Enumeration </returns>
        CmmErrorIso10360.GageBlockStacking ToIso10360GageBlockStacking(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "left":
                    return CmmErrorIso10360.GageBlockStacking.Left;
                case "center":
                    return CmmErrorIso10360.GageBlockStacking.Center;
                case "right":
                    return CmmErrorIso10360.GageBlockStacking.Right;
            }
            throw new ArgumentException("Unknown Iso10360 CMM performance test gage block stacking type.");
        }

        ///<summary> Converts the given string to a Sensor.Type enumeration. </summary>
        /// <param name="value"> The string to convert </param>
        /// <returns> The corresponding Sensor.Type </returns>
        SensorType ToSensorType(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "singletipfixed":
                    return SensorType.SingleTipFixed;
                case "singletiparticulated":
                    return SensorType.SingleTipArticulated;
                case "multitipfixed":
                    return SensorType.MultiTipFixed;
            }
            return SensorType.SingleTipFixed;
        }

        ///<summary> Converts the given string to a Sensor.Technology enumeration. </summary>
        /// <param name="value"> The string to convert </param>
        /// <returns> The corresponding Sensor.Technology </returns>
        SensorTechnology ToSensorTechnology(string value)
        {
            value = value.ToLower();
            if (value == "piezoelectricprobe")
                return SensorTechnology.PiezoelectricProbe;

            return SensorTechnology.SwitchingProbe;
        }

        ///<summary> Converts the given string to a Sensor.PerformanceTest enumeration. </summary>
        /// <param name="value"> The string to convert </param>
        /// <returns> The corresponding Sensor.PerformanceTest </returns>
        SensorPerformanceTest ToSensorPerformanceTest(string value)
        {
            value = value.ToLower();
            switch (value)
            {
                case "iso10360":
                    return SensorPerformanceTest.Iso10360;
                case "b89":
                    return SensorPerformanceTest.B89;
                case "vdivde":
                    return SensorPerformanceTest.VdiVde;
                case "specifiedstandarddeviation":
                    return SensorPerformanceTest.SpecifiedStandardDeviation;
            }
            return SensorPerformanceTest.None;
        }
        #endregion
    }
}



