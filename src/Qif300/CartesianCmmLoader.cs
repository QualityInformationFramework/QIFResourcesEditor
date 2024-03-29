﻿///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia, Metrosage, and project contributors
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

using Qif;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Qif300.Units;

namespace Qif300
{
    /// <summary> Loads Cartesian CMM from QIF 3.0 structures. </summary>
    class CartesianCmmLoader
    {
        /// <summary> Constructor </summary>
        /// <param name="cmm"> CMM object to load </param>
        /// <param name="errors"> Error object for putting errors during loading </param>
        public CartesianCmmLoader(qif30.CartesianCMMType cmm, FileUnits units, LoadingErrors errors)
        {
            Cmm = cmm;
            Units = units;
            Errors = errors;
        }

        /// <summary> QIF CMM object </summary>
        private qif30.CartesianCMMType Cmm { get; }

        private FileUnits Units { get; }

        /// <summary> Error storage </summary>
        private LoadingErrors Errors { get; }

        /// <summary> Loads an array of sensor identifiers </summary>
        /// <returns> Array of sensor identifiers </returns>
        public IReadOnlyList<uint> LoadSensorIds()
        {
            if (Cmm.SensorIds == null || Cmm.SensorIds.Id == null)
                return Array.Empty<uint>();

            return Cmm.SensorIds.Id.Select(id => id.Value).ToArray();
        }

        /// <summary> Loads ASME B89 performance test </summary>
        /// <returns> B89 performance test object. Null if accuracies array does not contain ASME B89 test, or there was an error during loading </returns>
        public CmmErrorB89 LoadB89Results()
        {
            // find the first B89 test in accuracies
            var test = FindAccuracyTest<qif30.CartesianCMMB89TestType>();
            if (test == null)
                return null;

            var res = new CmmErrorB89();

            // X linear accuracy
            var xAccuracy = Units.LoadLengthValue(test.XLinearAccuracy);
            if (xAccuracy != null)
                res.XLinearAccuracy = xAccuracy.Value;
            else
                Errors.AddError(Cmm, "Error loading XLinearAccuracy of CartesianCMMB89TestType");

            // Y linear accuracy
            var yAccuracy = Units.LoadLengthValue(test.YLinearAccuracy);
            if (yAccuracy != null)
                res.YLinearAccuracy = yAccuracy.Value;
            else
                Errors.AddError(Cmm, "Error loading YLinearAccuracy of CartesianCMMB89TestType");

            // Z linear accuracy
            var zAccuracy = Units.LoadLengthValue(test.ZLinearAccuracy);
            if (zAccuracy != null)
                res.ZLinearAccuracy = zAccuracy.Value;
            else
                Errors.AddError(Cmm, "Error loading ZLinearAccuracy of CartesianCMMB89TestType");

            // Volumetric performance
            var vp = Units.LoadLengthValue(test.VolumetricPerformance);
            if (vp != null)
                res.VolumetricPerformance = vp.Value;
            else
                Errors.AddError(Cmm, "Error loading VolumetricPerformance of CartesianCMMB89TestType");

            // Offset volumetric performance
            var offsetVp = Units.LoadLengthValue(test.OffsetVolumetricPerformance);
            if (offsetVp != null)
                res.OffsetVolumetricPerformance = offsetVp.Value;
            else
                Errors.AddError(Cmm, "Error loading OffsetVolumetricPerformance of CartesianCMMB89TestType");

            // repeatability
            var repeatability = Units.LoadLengthValue(test.Repeatability);
            if (repeatability != null)
                res.Repeatability = repeatability.Value;
            else
                Errors.AddError(Cmm, "Error loading Repeatability of CartesianCMMB89TestType");

            return res;
        }

        /// <summary> Loads type of performance test which is considered to be active </summary>
        /// <returns> Type if performance test </returns>
        public CmmPerformanceTest LoadActivePerformanceTest()
        {
            var accuracies = Cmm.Accuracies?.CartesianCMMAccuracy;
            if (accuracies == null)
                return CmmPerformanceTest.None;

            var accuracy = Cmm.Accuracies.CartesianCMMAccuracy.FirstOrDefault(a => a.CartesianCMMAccuracyTest is qif30.CartesianCMMB89TestType || a.CartesianCMMAccuracyTest is qif30.ISO10360TestType);
            if (accuracy == null)
                return CmmPerformanceTest.None;

            return accuracy.CartesianCMMAccuracyTest is qif30.ISO10360TestType ? CmmPerformanceTest.Iso10360 : CmmPerformanceTest.B89;
        }

        /// <summary> Loads ISO performance test </summary>
        /// <returns> ISO performance test object. Null if accuracies array does not contain ISO test, or there was an error during loading </returns>
        public CmmErrorIso10360 LoadIsoResults()
        {
            // Find the first ISO test in accuracies
            var test = FindAccuracyTest<qif30.ISO10360TestType>();
            if (test == null)
                return null;

            var results = new CmmErrorIso10360();

            if (test.Item is qif30.LinearValueType maxErrorConstant)
            {
                results.ErrorOfIndicationType = CmmErrorIso10360.ErrorType.OneValue;

                var val = Units.LoadLengthValue(maxErrorConstant);
                if (val.HasValue)
                    results.ErrorOfIndicationValue3 = val.Value;
                else
                    Errors.AddError(Cmm, "Error loading MaxErrorConstant value");
            }
            else if (test.Item is qif30.LinearErrorType linearError)
            {
                results.ErrorOfIndicationType = CmmErrorIso10360.ErrorType.TwoValues;

                var baseError = Units.LoadLengthValue(linearError.BaseError);
                if (baseError.HasValue)
                    results.ErrorOfIndicationValue1 = baseError.Value;
                else
                    Errors.AddError(Cmm, "Error loading BaseError value");

                results.ErrorOfIndicationValue2 = (double)linearError.ErrorRate;
            }
            else if (test.Item is qif30.LesserErrorType lesserError)
            {
                results.ErrorOfIndicationType = CmmErrorIso10360.ErrorType.ThreeValues;

                var baseError = Units.LoadLengthValue(lesserError.LinearError.BaseError);
                if (baseError.HasValue)
                    results.ErrorOfIndicationValue1 = baseError.Value;
                else
                    Errors.AddError(Cmm, "Error loading BaseError value");

                results.ErrorOfIndicationValue2 = (double)lesserError.LinearError.ErrorRate;

                var e = Units.LoadLengthValue(lesserError.MaxErrorConstant);
                if (e.HasValue)
                    results.ErrorOfIndicationValue3 = e.Value;
                else
                    Errors.AddError(Cmm, "Error loading MaxErrorConstant value");
            }
            else
                Errors.AddError(Cmm, "Error loading ISO 10360 mpe values");

            return results;
        }

        /// <summary> Loads air humidity </summary>
        /// <returns> Pair (humidity value, humidity uncertainty) or null of there was a loading error. </returns>
        public Tuple<double, double> LoadCmmLaserAirHumidity()
        {
            if (Cmm.EnvironmentalRange != null
                && Cmm.EnvironmentalRange.MaxAmbientRelativeHumidity != null && Cmm.EnvironmentalRange.MinAmbientRelativeHumidity != null)
            {
                var h0 = Cmm.EnvironmentalRange.MaxAmbientRelativeHumidity.Value;
                var h1 = Cmm.EnvironmentalRange.MinAmbientRelativeHumidity.Value;
                var h = (h0 + h1) / 2;
                return new Tuple<double, double>((double)h, (double)Math.Abs(h0 - h));
            }

            Errors.AddError(Cmm, "Error loading CmmLaserAirHumidity value");
            return null;
        }


        /// <summary> Loads air pressure </summary>
        /// <returns> Pair (pressure value, pressure uncertainty) or null of there was a loading error. </returns>
        public Tuple<double, double> LoadCmmLaserAirPressure()
        {
            if (Cmm.EnvironmentalRange != null &&
                Cmm.EnvironmentalRange.MaxAmbientAirPressure != null
                && Cmm.EnvironmentalRange.MinAmbientAirPressure != null)
            {
                var maxPressure = Units.LoadPressureValue(Cmm.EnvironmentalRange.MaxAmbientAirPressure);
                var minPressure = Units.LoadPressureValue(Cmm.EnvironmentalRange.MinAmbientAirPressure);
                if (maxPressure.HasValue && minPressure.HasValue)
                {
                    var p0 = maxPressure.Value;
                    var p1 = minPressure.Value;
                    var p = (p0 + p1) / 2;
                    return new Tuple<double, double>((double)p, (double)Math.Abs(p0 - p));
                }
            }

            Errors.AddError(Cmm, "Error loading CmmLaserAirPressure value");
            return null;
        }

        /// <summary> Loads air temperature </summary>
        /// <returns> Pair (temperature value, temperature uncertainty) or null of there was a loading error. </returns>
        public Tuple<double, double> LoadCmmLaserAirTemperature()
        {
            if (Cmm.EnvironmentalRange != null &&
                Cmm.EnvironmentalRange.MaxAmbientTemperature != null
                && Cmm.EnvironmentalRange.MinAmbientTemperature != null)
            {
                var maxTemperature = Units.LoadTemperatureValue(Cmm.EnvironmentalRange.MaxAmbientTemperature);
                var minTemperature = Units.LoadTemperatureValue(Cmm.EnvironmentalRange.MinAmbientTemperature);
                if (maxTemperature.HasValue && minTemperature.HasValue)
                {
                    var t0 = maxTemperature.Value;
                    var t1 = minTemperature.Value;
                    var t = (t0 + t1) / 2;
                    return new Tuple<double, double>((double)t, (double)Math.Abs(t0 - t));
                }
            }

            Errors.AddError(Cmm, "Error loading CmmLaserAirTemperature value");
            return null;
        }

        /// <summary> Loads type if software compensation </summary>
        /// <returns> Type of software compensation or null if there was a loading error </returns>
        public CmmSoftwareCompensationType? LoadSoftwareCompensation()
        {
            var attr = Cmm.Attributes.FindAttribute<qif30.AttributeStrType>("SoftwareCompensation");
            if (attr != null)
            {
                var compensationType = Utilities.CmmSoftwareCompensationStrMap.TryGetEnum(attr.value);
                if (compensationType.HasValue)
                    return compensationType;
            }

            Errors.AddError(Cmm, "Error loading CmmSoftwareCompensation value");
            return null;
        }

        /// <summary> Loads tangential error of the rotary table </summary>
        /// <returns> Tangential error of the rotary table </returns>
        public double? LoadRotaryTableTangentialError()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.TableErrors != null && Cmm.RotaryTable.TableErrors.TangentialError != null)
            {
                var tangetialError = Units.LoadLengthValue(Cmm.RotaryTable.TableErrors.TangentialError);
                if (tangetialError.HasValue)
                    return tangetialError;
            }

            Errors.AddError(Cmm, "Error loading rotary table tangential error");
            return null;
        }

        /// <summary> Loads radial error of the rotary table </summary>
        /// <returns> Radial error of the rotary table </returns>
        public double? LoadRotaryTableRadialError()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.TableErrors != null && Cmm.RotaryTable.TableErrors.RadialError != null)
            {
                var e = Units.LoadLengthValue(Cmm.RotaryTable.TableErrors.RadialError);
                if (e.HasValue)
                    return e;
            }

            Errors.AddError(Cmm, "Error loading rotary table radial error");
            return null;
        }

        /// <summary> Loads axial error of the rotary table </summary>
        /// <returns> Axial error of the rotary table </returns>
        public double? LoadRotaryTableAxialError()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.TableErrors != null && Cmm.RotaryTable.TableErrors.AxialError != null)
            {
                var e = Units.LoadLengthValue(Cmm.RotaryTable.TableErrors.AxialError);
                if (e.HasValue)
                    return e;
            }

            Errors.AddError(Cmm, "Error loading rotary table axial error");
            return null;
        }


        /// <summary> Loads zero index direction of the rotary table </summary>
        /// <returns> Zero index direction of the rotary table </returns>
        public T3<double>? LoadRotaryTableZeroIndexDirection()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.ZeroIndexDirection != null)
                return Utilities.StringToPoint(Cmm.RotaryTable.ZeroIndexDirection.Text);

            Errors.AddError(Cmm, "Error parsing rotary table ZeroIndexDirection");
            return null;
        }

        /// <summary> Loads axis direction of the rotary table </summary>
        /// <returns> Axis direction of the rotary table </returns>
        public T3<double>? LoadRotaryTableAxisDirection()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.AxisDirection != null)
                return Utilities.StringToPoint(Cmm.RotaryTable.AxisDirection.Text);

            Errors.AddError(Cmm, "Error parsing rotary table axis direction");
            return null;
        }

        /// <summary> Loads LocationOnCMM of the rotary table </summary>
        /// <returns> LocationOnCMM of the rotary table </returns>
        public T3<double>? LoadRotaryTableLocation()
        {
            if (Cmm.RotaryTable != null && Cmm.RotaryTable.LocationOnCMM != null)
            {
                var point = Units.LoadPoint(Cmm.RotaryTable.LocationOnCMM);
                if (point.HasValue)
                    return point;
            }

            Errors.AddError(Cmm, "Error parsing rotary table location");
            return null;
        }

        /// <summary> Loads CMM temperature </summary>
        /// <returns> CMM temperature or null if there was a loading error </returns>
        public double? LoadTemperature()
        {
            var t = Cmm.Attributes.FindAttribute<qif30.AttributeD1Type>("CMMTemperature");
            if (t != null)
                return t.value;

            Errors.AddError(Cmm, "Error loading CMMTemperature value");
            return null;
        }

        /// <summary> Loads CMM temperature uncertainty </summary>
        /// <returns> CMM temperature uncertainty or null if there was a loading error </returns>
        public double LoadTemperatureUncertainty()
        {
            var t = Cmm.Attributes.FindAttribute<qif30.AttributeD1Type>("CmmTemperatureUncertainty");
            if (t != null)
                return t.value;

            Errors.AddError(Cmm, "Error loading CmmTemperatureUncertainty value");
            return -1;
        }

        /// <summary> Loads type of CMM scales and coefficient of expansion/coefficient of expansion uncertainty </summary>
        /// <returns>
        /// Triple of values:
        /// First - type of scales
        /// Second - coefficient of expansion
        /// Third - coefficient of expansion uncertainty
        /// or null if there were loading errors
        /// </returns>
        public Tuple<CmmScalesType, double, double> LoadCmmScales()
        {
            if (Cmm.Scales is qif30.CartesianMeasurementDeviceScalesType scales
                && scales.XScale != null
                && scales.YScale != null
                && scales.ZScale != null)
            {
                // check if all 3 scales are equal
                if (!Utilities.AreEqual(scales.XScale.ScaleCoefficientOfExpansion, scales.YScale.ScaleCoefficientOfExpansion, scales.ZScale.ScaleCoefficientOfExpansion)
                    || !Utilities.AreEqual(scales.XScale.ScaleCoefficientOfExpansionUncertainty, scales.YScale.ScaleCoefficientOfExpansionUncertainty, scales.ZScale.ScaleCoefficientOfExpansionUncertainty))
                    Errors.AddWarning(Cmm, "CMM scales expansion coefficients of the 3 axes are not equal. Defaulting to X Scale values.");

                if (scales.XScale.TypeOfScale.Item is qif30.TypeOfScaleEnumType tQif && Utilities.CmmScalesMap.TryGetValue(tQif, out var t))
                    return new Tuple<CmmScalesType, double, double>(t, (double)scales.XScale.ScaleCoefficientOfExpansion, (double)scales.XScale.ScaleCoefficientOfExpansionUncertainty);
                else
                    Errors.AddError(Cmm, "Error loading CMMScales type value");
            }

            return null;
        }

        /// <summary> Loads axis orientations </summary>
        /// <returns> Types of X/Y/Z axis orientations or null if there were loading errors </returns>
        public T3<CmmAxisOrientation>? LoadAxisOrientations()
        {
            if (Cmm.CMMAxisDirections is qif30.CartesianCMMAxisDirectionsType axisDirections)
            {
                T3<CmmAxisOrientation> res = new T3<CmmAxisOrientation>();
                if (Utilities.AxisDirectionMap.TryGetValue(axisDirections.XAxisDirection, out res.x)
                    && Utilities.AxisDirectionMap.TryGetValue(axisDirections.YAxisDirection, out res.y)
                    && Utilities.AxisDirectionMap.TryGetValue(axisDirections.ZAxisDirection, out res.z))
                    return res;
            }

            Errors.AddError(Cmm, "Error loading AxisOrientation value");
            return null;
        }

        /// <summary> Loads the type of the CMM </summary>
        /// <returns></returns>
        public CmmType? LoadType()
        {
            // NOTE: Do we need to consider 'other' type which is represented as string?
            if (Cmm.CMMGeometry != null && Cmm.CMMGeometry.Item is qif30.CartesianCMMGeometryEnumType t && Utilities.CmmTypeMap.TryGetValue(t, out CmmType resType))
                return resType;

            Errors.AddError(Cmm, "Error parsing CMMGeometry");
            return null;
        }

        /// <summary> Loads working volume assuming WorkingVolume is CartesianWorkingVolume type </summary>
        /// <returns> Working volume values or null if there were loading errors </returns>
        public T3<double>? LoadCartesianWorkingVolume()
        {
            if (Cmm.WorkingVolume == null)
                return null;

            if (!(Cmm.WorkingVolume is qif30.CartesianWorkingVolumeType wv))
            {
                Errors.AddWarning(Cmm, $"Non Cartesian working volume type have been ignored. CMM ID: {Cmm.id}");
                return null;
            }

            var x = Units.LoadLengthValue(wv.XAxisLength);
            var y = Units.LoadLengthValue(wv.YAxisLength);
            var z = Units.LoadLengthValue(wv.ZAxisLength);
            if (x.HasValue && y.HasValue && z.HasValue)
                return new T3<double>(x.Value, y.Value, z.Value);

            Errors.AddError(Cmm, "Error loading Working Volume values");
            return null;
        }

        /// <summary> Loads lower extent values. </summary>
        /// <returns> Lower extent values or null if there were loading errors </returns>
        public T3<double>? LoadLowerExtent()
        {
            const int n = 3;
            var zeros = new double[n];
            for (int i = 0; i < n; ++i)
            {
                var attrName = $"LowerExtent{Utilities.CoordinateNames[i]}";
                var attr = Cmm.Attributes.FindAttribute<qif30.AttributeD1Type>(attrName);
                if (attr == null)
                {
                    Errors.AddError($"Error loading CMM: {Cmm.Name} (id = {Cmm.id})", $"The '{attrName}' attribute is missing");
                    return null;
                }
                zeros[i] = attr.value;
            }
            return new T3<double>(zeros);
        }

        /// <summary> Finds accuracy test of the given type </summary>
        /// <typeparam name="T"> Type of accuracy test </typeparam>
        /// <returns> Found accuracy or null </returns>
        private T FindAccuracyTest<T>() where T : qif30.CMMAccuracyTestBaseType
        {
            var accuracies = Cmm.Accuracies?.CartesianCMMAccuracy;
            if (accuracies == null)
                return null;

            var accuracy = Cmm.Accuracies.CartesianCMMAccuracy.FirstOrDefault(a => a.CartesianCMMAccuracyTest is T);
            if (accuracy == null)
                return null;

            return accuracy.CartesianCMMAccuracyTest as T;
        }
    }
}
