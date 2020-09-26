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
using System.ComponentModel;
using System.Collections.ObjectModel;
using MeasurementResourceEditor.MrdXml;
using Qif_1_9_1;
using Qif;

namespace MeasurementResourceEditor
{
    public class TreeNode : INotifyPropertyChanged
    {
        /// <summary> Constructor. </summary>
        /// <param name="cmmOrSensorData"> The CmmParameters or SensorParameters data. </param>
        public TreeNode(object cmmOrSensorData)
        {
            // Make sure that we are getting either a CmmParameters object or a SensorParameters object.
            if (!(cmmOrSensorData is SensorParameters) && !(cmmOrSensorData is CmmParameters))
                throw new InvalidOperationException("TreeNode data must be CmmParameters or SensorParameters");

            // Assign the data and initialize
            Data = cmmOrSensorData;
            _isSelected = false;
            _isExpanded = false;
            ChildrenNodes = new ObservableCollection<TreeNode>();
            ParentNode = null;
        }

        /// <summary> Event handler for when the a property of this class has changed. </summary>
        public event PropertyChangedEventHandler PropertyChanged;

        /// <summary> OnPropertyChanged </summary>
        /// <param name="propertyName"> Property name </param>
        protected virtual void OnPropertyChanged(string propertyName) => PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));

        /// <summary> Determines if this tree node describes a CMM. </summary>
        public bool IsCmm { get { return Data is CmmParameters; } }

        /// <summary> Determines if this tree node describes a Sensor. </summary>
        public bool IsSensor { get { return Data is SensorParameters; } }

        /// <summary> Gets or sets a value indicating whether this node is selected or not. </summary>
        public bool IsSelected
        {
            get { return _isSelected; }
            set
            {
                if (value != _isSelected)
                {
                    _isSelected = value;
                    OnPropertyChanged("IsSelected");
                }
                OnPropertyChanged("Name");
            }
        }

        /// <summary> Gets or sets a value indicating whether this node is expanded or not. </summary>
        public bool IsExpanded
        {
            get { return _isExpanded; }
            set
            {
                // Change the state of this node if warranted
                if (value != _isExpanded)
                {
                    _isExpanded = value;
                    OnPropertyChanged("IsExpanded");
                }

                // Expand all the way up to the root
                if (_isExpanded && ParentNode != null)
                    ParentNode.IsExpanded = true;
            }
        }

        /// <summary> Gets or sets the name of this CMM or Sensor. </summary>
        public string Name
        {
            get
            {
                if (IsCmm)
                    return (Data as CmmParameters).Name;
                else
                    return (Data as SensorParameters).Name;
            }
        }

        /// <summary> Gets a pointer to the object containing the data (will be CmmParameters or SensorParameters). </summary>
        public object Data { get; }

        /// <summary> Gets the ChildrenNodes of this node, if any. </summary>
        public ObservableCollection<TreeNode> ChildrenNodes { get; }

        /// <summary> Gets or sets the parent node of this MrdViewTreeNode (if any). </summary>
        public TreeNode ParentNode { get; set; }

        /// <summary> Gets the path to the image that is used for this node. </summary>
        public string IconImagePath
        {
            get
            {
                if (IsCmm)
                    return _imageUriPackPrefix + "Cmm.png";
                else
                    return _imageUriPackPrefix + "Sensor.png";
            }
        }

        /// <summary> Adds a child node to this node. </summary>
        /// <param name="node"> Node to add </param>
        public void AddChild(TreeNode item)
        {
            // We can only add children to CMM nodes, and the child must be a sensor
            if (!IsCmm)
                throw new InvalidOperationException("Can only add child MrdTreeViewNodes to CMM nodes");
            if (!item.IsSensor)
                throw new InvalidOperationException("Can only add sensor nodes as children of CMM nodes");

            // Make sure this child sensor doesn't already exist
            TreeNode foundNode = ChildrenNodes.FirstOrDefault(c => (c.Data == item.Data));
            if (foundNode != null)
                throw new InvalidOperationException("Sensor \'" + (item.Data as SensorParameters).Name + "\' has already been added to this CMM");

            // Add the node
            ChildrenNodes.Add(item);
            item.ParentNode = this;
        }

        /// <summary> Adds the child node to this node at the given index. </summary>
        /// <param name="item"> Node to add </param>
        /// <param name="index"> Index </param>
        public void AddChildAtIndex(TreeNode item, int index)
        {
            // We can only add children to CMM nodes, and the child must be a sensor
            if (!IsCmm)
                throw new InvalidOperationException("Can only add child MrdTreeViewNodes to CMM nodes");
            if (!item.IsSensor)
                throw new InvalidOperationException("Can only add sensor nodes as children of CMM nodes");

            // Make sure this child sensor doesn't already exist
            TreeNode foundNode = ChildrenNodes.FirstOrDefault(c => (c.Data == item.Data));
            if (foundNode != null)
                throw new InvalidOperationException("Sensor \'" + (item.Data as SensorParameters).Name + "\' has already been added to this CMM");

            // Add the node
            ChildrenNodes.Insert(index, item);
            item.ParentNode = this;
        }

        /// <summary> Value indicating whether the node is selected. </summary>
        private bool _isSelected;

        /// <summary> Value indicating whether the node is expanded. </summary>
        private bool _isExpanded;

        /// <summary> Path prefix to images. </summary>
        private readonly string _imageUriPackPrefix = "/MeasurementResourceEditor;component/Images/";
    }
}