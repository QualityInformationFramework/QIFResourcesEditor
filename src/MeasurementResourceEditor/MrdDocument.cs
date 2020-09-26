﻿// Copyright(c) Capvidia, 2020
// https://www.capvidia.com
//
// Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software
// and accompanying documentation covered by this license(the "Software") to use, reproduce, display, distribute, execute,
// and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the Software
// is furnished to do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement,
// including the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and all derivative works of the Software,
// unless such copies or derivative works are solely in the form of machine-executable object code generated by a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT.
// IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Collections.ObjectModel;
using System.Diagnostics;
using log4net;
using MeasurementResourceEditor.MrdXml;
using Qif;

namespace MeasurementResourceEditor
{
    /// <summary> Represents a measurement resource document. </summary>
    public class MrdDocument
    {
        /// <summary> MRD format extension. </summary>
        public const string MrdFileExtension = "mrd";

        /// <summary> QIF format extension. </summary>
        public const string QifFileExtension = "qif";

        /// <summary> Logger. </summary>
        private static readonly ILog log = LogManager.GetLogger(typeof(MrdDocument));

        /// <summary> Returns the type of document the given filename should be, based on extension. </summary>
        /// <param name="filename"> Filename </param>
        /// <returns> Type of document </returns>
        public static DocumentType GetDocumentType(string filename)
        {
            if (string.Compare(System.IO.Path.GetExtension(filename), "." + QifFileExtension, true) == 0)
                return DocumentType.QIF;
            if (string.Compare(System.IO.Path.GetExtension(filename), "." + MrdFileExtension, true) == 0)
                return DocumentType.MRD;
            return DocumentType.Unknown;
        }

        /// <summary> Represents the type of the document. </summary>
        public enum DocumentType
        {
            /// <summary> QIF. </summary>
            QIF,
            /// <summary> MRD. </summary>
            MRD,
            /// <summary> Unknown document type. </summary>
            Unknown
        }

        /// <summary> Default Constructor. Creates an empty document. </summary>
        public MrdDocument() { }

        /// <summary>
        /// Constructs a new MrdDocument by loading the underlying MRD XML file.
        /// Upon failure, this constructor throws an exception.
        /// </summary>
        /// <param name="filename"> Name of file to open </param>
        /// <param name="documentType"> Document type </param>
        public MrdDocument(string filename, DocumentType documentType)
        {
            if (documentType == DocumentType.Unknown)
                throw new ArgumentException("Invalid file type in MrdDocument()", "documentType");

            XmlFilename = filename;
            Type = documentType;
            Tree = null;
            Qpid = null;

            // Load the resources
            if (Type == DocumentType.MRD)
                LoadMrd();
            else if (Type == DocumentType.QIF)
                LoadQif();
            else
                throw new InvalidOperationException();
        }

        /// <summary> Gets the current XML filename. </summary>
        public string XmlFilename { get; private set; }

        /// <summary> Gets the type of document loaded. </summary>
        public DocumentType Type { get; private set; } = DocumentType.Unknown;

        /// <summary> Gets the tree of TreeNode that represents the MRD. </summary>
        public ObservableCollection<TreeNode> MrdTree
        {
            get
            {
                // If the tree has not yet been created, then we need to create it again.
                if (Tree == null && CmmList != null)
                {
                    // Initialize a new tree and make sure that we actually have a list of CMMs
                    Tree = new ObservableCollection<TreeNode>();

                    // Iterate through all the CMMs and Sensors under each one, and build a tree of TreeNode
                    foreach (CmmParameters cmm in CmmList)
                    {
                        TreeNode cmmNode = new TreeNode(cmm);
                        foreach (SensorParameters sensor in cmm.SensorParameterList)
                        {
                            TreeNode sensorNode = new TreeNode(sensor);
                            cmmNode.AddChild(sensorNode);
                        }
                        Tree.Add(cmmNode);
                    }
                }

                return Tree;
            }
        }

        /// <summary> Gets the list of the CMMs. </summary>
        public List<CmmParameters> CmmList { get; set; } = new List<CmmParameters>();

        /// <summary> Saves the MRD to the current XML file. The current DocumentType must be either MRD or QIF. </summary>
        /// <returns> True if successfully saved, otherwise false </returns>
        public bool Save()
        {
            Debug.Assert(Type == DocumentType.MRD || Type == DocumentType.QIF);

            // Save the resources to the save location
            bool success;
            if (Type == DocumentType.MRD)
            {
                // Save the file as MRD
                MrdXmlSaver saver = new MrdXmlSaver();
                success = saver.SaveFile(XmlFilename, CmmList);

                // If there was an error, show an error message.
                if (!success)
                {
                    string errorMessage = "Error saving MRD:\n" + saver.ErrorMessage;
                    MessageBox.Show(errorMessage, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
            }
            else if (Type == DocumentType.QIF)
            {
                // Save the file as QIF.
                var document = new Qif300.QifResourcesDocument(XmlFilename) { Qpid = Qpid };
                success = document.Save(CmmList);
            }
            else
                throw new InvalidOperationException();

            return success;
        }

        /// <summary> Saves the MRD to a new XML file, and changes the path of the current XML file to this new path. </summary>
        /// <param name="filename"> Filename </param>
        /// <param name="documentType"> Document type </param>
        /// <returns> True in case of success, otherwise false </returns>
        public bool SaveAs(string filename, DocumentType documentType)
        {
            // Document type must not be "unknown"
            if (documentType == DocumentType.Unknown)
                throw new ArgumentException("Unknown file type in MrdDocument.SaveAs()");

            // Save the old filename in case the "Save As" fails, then set the new one.
            string oldFilename = XmlFilename;
            DocumentType oldDocumentType = Type;
            XmlFilename = filename;
            Type = documentType;

            // Save it out now.  If fails, put the old path back in place.
            bool success = Save();
            if (!success)
            {
                XmlFilename = oldFilename;
                Type = oldDocumentType;
            }

            return success;
        }

        /// <summary> Inserts the given CMM (and its children) to the beginning of the MRD Tree. </summary>
        /// <param name="cmm"> CMM to add </param>
        /// <returns> The newly created CMM TreeNode </returns>
        public TreeNode AddCmm(CmmParameters cmm)
        {
            // Insert it to the list of CMMs (the MRD itself)
            CmmList.Insert(0, cmm);

            // Insert it into the tree as well.
            TreeNode cmmNode = new TreeNode(cmm);
            MrdTree.Insert(0, cmmNode);

            // Insert its children into the tree
            foreach (SensorParameters sensor in cmm.SensorParameterList)
            {
                TreeNode sensorNode = new TreeNode(sensor);
                cmmNode.AddChild(sensorNode);
            }

            return cmmNode;
        }

        /// <summary> Gets an unused name for a new CMM.  Will be something like "MyCmm1". </summary>
        /// <returns> Name </returns>
        public string GetNewCmmName()
        {
            string namebase = "CMM";
            int number = 1;
            string name;

            do
            {
                name = namebase + number.ToString();
                number++;
            }
            while (CmmNameExists(name) && number < 100000);

            return name;
        }

        /// <summary> Adds the given Sensor to the given CMM node. </summary>
        /// <param name="sensor"> Sensor to add  </param>
        /// <param name="owningCmmNode"> CMM node </param>
        /// <returns> The newly created node </returns>
        public TreeNode AddSensorToCmmNode(SensorParameters sensor, TreeNode owningCmmNode)
        {
            // Insert this item into the MRD 
            bool success = (owningCmmNode.Data as CmmParameters).AddSensorAtIndex(0, sensor);
            Debug.Assert(success);

            // Insert this item into the tree
            TreeNode node = new TreeNode(sensor);
            owningCmmNode.AddChildAtIndex(node, 0);
            return node;
        }

        /// <summary> Gets an unused name for a new Sensor on the given CMM.  Will be something like "MySensor1". </summary>
        /// <param name="owningCmm"> Owning CMM </param>
        /// <returns> Name </returns>
        public string GetNewSensorName(CmmParameters owningCmm)
        {
            string namebase = "Sensor";
            int number = 1;
            string name;
            do
            {
                name = namebase + number.ToString();
                number++;
            }
            while (SensorNameExistsOnCmm(owningCmm, name) && number < 100000);
            return name;
        }

        /// <summary> Deletes the given Measurement Resource. If it is a CMM, it deletes all attached sensors too. </summary>
        /// <param name="node"> Node to delete </param>
        public void DeleteMeasurementResource(TreeNode node)
        {
            if (node.IsCmm)
                DeleteCmm(node);
            else if (node.IsSensor)
                DeleteSensor(node);
            else
                throw new ArgumentException();
        }

        /// <summary> Loads document as QIF. </summary>
        private void LoadQif()
        {
            using (var document = QifDocumentFactory.CreateDocument(XmlFilename))
            {
                var loadedCmmList = document.Load();
                if (loadedCmmList == null || document.HadError)
                {
                    var sb = new StringBuilder();
                    for (int i = 0; i < document.ErrorList.Count; i++)
                    {
                        sb.Append("Error " + (i + 1) + ":" + Environment.NewLine);
                        sb.Append(document.ErrorList[i] + Environment.NewLine);
                        sb.Append("Details:" + Environment.NewLine);
                        sb.Append(document.ErrorDetailsList[i] + Environment.NewLine);
                    }
                    throw new Exception(sb.ToString());
                }

                // Look through the warnings.
                if (document.HadWarning)
                {
                    log.Info("Warnings when loading " + XmlFilename + ":");
                    for (int i = 0; i < document.WarningList.Count; i++)
                    {
                        log.Info("Warning " + (i + 1) + ":");
                        log.Info(document.WarningList[i]);
                        log.Info("Details:\n");
                        log.Info(document.WarningDetailsList[i]);
                    }
                }

                // Set our list of CMMs
                CmmList = new List<CmmParameters>(loadedCmmList);
                Qpid = document.Qpid;
#if DEBUG
                log.Info("CMMs loaded. List:");
                foreach (CmmParameters cmm in CmmList)
                    log.Info(cmm.Name);
                log.Info("CMM list end");
#endif
            }
        }

        /// <summary> Loads document as MRD </summary>
        private void LoadMrd()
        {
            // This is an MRD file. So, use the old MRD mechanism to load.
            var loader = new MrdXmlLoader();
            CmmList = loader.LoadFile(XmlFilename);
        }

        /// <summary> Deletes the given CMM node from the tree and MRD. </summary>
        /// <param name="node"> CMM node to delete </param>
        private void DeleteCmm(TreeNode node)
        {
            // Remove it from the tree view
            MrdTree.Remove(node);

            // Remove it from the MRD
            CmmList.Remove(node.Data as CmmParameters);

            // Clean up the underlying native memory
            (node.Data as CmmParameters).DeleteNativeData();
        }

        /// <summary> Deletes the given Sensor node from the tree and MRD. </summary>
        /// <param name="node"> Sensor node to delete </param>
        private void DeleteSensor(TreeNode node)
        {
            // Remove it from the tree view
            node.ParentNode.ChildrenNodes.Remove(node);

            // Remove it from the MRD
            (node.ParentNode.Data as CmmParameters).RemoveSensor(node.Data as SensorParameters);

            // Clean up the underlying native memory
            (node.Data as SensorParameters).DeleteNativeData();
        }

        /// <summary> Determines if the given CMM name exists in our list of CMMs. </summary>
        /// <param name="name"> CMM Name </param>
        /// <returns> True if there is a CMM with the specified name, otherwise false </returns>
        private bool CmmNameExists(string name) => CmmList.Any(c => c.Name == name);

        /// <summary> Determines if the given Sensor name exists in the list of Sensors on the given CMM. </summary>
        /// <param name="cmm"> CMM </param>
        /// <param name="name"> Sensor name </param>
        /// <returns> True f there is a sensor with the specified name, otherwise false </returns>
        private bool SensorNameExistsOnCmm(CmmParameters cmm, string name) => cmm.SensorParameterList.Any(s => s.Name == name);

        /// <summary> Gets or sets the document tree. </summary>
        private ObservableCollection<TreeNode> Tree { get; set; }

        /// <summary> Gets QIF document factory. </summary>
        private QifDocumentFactory QifDocumentFactory { get; } = new QifDocumentFactory();

        /// <summary> Gets or sets the QPId. </summary>
        private string Qpid { get; set; }

    }
}