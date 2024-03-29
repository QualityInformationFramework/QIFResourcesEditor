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

using System;
using System.Collections.Generic;
using System.Xml;
using System.Text.RegularExpressions;
using System.Linq;
using Qif;

namespace MeasurementResourceEditor.MrdXml
{
    /// <summary> Abstract class of MRD loaders. </summary>
    internal abstract class AMrdXmlLoader
    {
        /// <summary> Constructor. </summary>
        /// <param name="doc"> XML document being loaded </param>
        public AMrdXmlLoader(XmlDocument doc)
        {
            _doc = doc;
        }

        /// <summary> Loads the CMMs and their Sensors starting at the given Root Element. </summary>
        /// <param name="rootElement"> Root element </param>
        /// <returns> Loaded CMMs </returns>
        public abstract List<CmmParameters> Load(XmlElement rootElement);

        /// <summary> Determines if the given node contains a direct child node of the given name. </summary>
        /// <param name="node"> The node whose children to search </param>
        /// <param name="name"> The name of the node to search for </param>
        /// <returns> True if the given node has a direct child of the given name </returns>
        protected bool ContainsNode(XmlNode node, string name)
        {
            XmlNode valueNode = node.SelectSingleNode(name);
            return valueNode != null;
        }

        /// <summary> Gets the value contained inside the given node.  Only one such node should exists. </summary>
        /// <param name="node"> The node whose interior value we want to get </param>
        /// <param name="name"> The name of the node we are looking for </param>
        /// <returns> The string contained </returns>
        protected string GetSingleValue(XmlNode node, string name)
        {
            XmlNode valueNode = node.SelectSingleNode(name);
            if (valueNode != null && valueNode.FirstChild != null)
                return valueNode.FirstChild.Value.Trim();

            return "";
        }

        /// <summary> Gets the attribute value of the given name in the given node.  Only one such node should exists. </summary>
        /// <param name="node"> The node we are searching in </param>
        /// <param name="ownerName"> The name of the node which contains the attribute </param>
        /// <param name="attributeName"> The name of the attribute we are looking for </param>
        /// <returns> The string contained </returns>
        protected string GetSingleAttributeValue(XmlNode node, string ownerName, string attributeName)
        {
            XmlNode owningNode = node.SelectSingleNode(ownerName);
            if (owningNode != null)
            {
                XmlAttributeCollection attributes = owningNode.Attributes;
                if (attributes != null)
                {
                    XmlNode attributeNode = attributes.GetNamedItem(attributeName);
                    if (attributeNode != null)
                    {
                        return attributeNode.Value;
                    }
                }
            }
            return "";
        }

        /// <summary> Returns the double value represented by the given attribute in the given node.  Only one such node should exists. </summary>
        /// <param name="node"> The node we are searching for the attribute's node in </param>
        /// <param name="ownerName"> The name of the node which contains the attribute we are looking for </param>
        /// <param name="attributeName"> The name of the attribute we are looking for </param>
        /// <returns> The double value represented by the attribute string </returns>
        protected double GetSingleDAttributeValue(XmlNode node, string ownerName, string attributeName)
        {
            // Get the attribute string
            string attributeString = GetSingleAttributeValue(node, ownerName, attributeName);

            // Parse the value
            if (!Utilities.TryParseDouble(attributeString, out var value))
                throw new ApplicationException("Error parsing value: " + attributeString + " in node: " + ownerName + ", attribute: " + attributeName);
            return value;
        }

        /// <summary> Retrieves an List of doubles from the given node.  Only one such node should exists. </summary>
        /// <param name="node"> The node we are searching in </param>
        /// <param name="name"> The name of the node we are looking for </param>
        /// <returns> A list of double values represented by the string </returns>
        protected List<double> GetSingleDValueList(XmlNode node, string name)
        {
            // Split the string up into individual tokens (separated by whitespace)
            string nodeString = GetSingleValue(node, name);
            string[] doubleStrings = Regex.Split(nodeString, @"\s").Where(s => !string.IsNullOrEmpty(s)).ToArray();
            if (doubleStrings.Length == 0)
                return null;

            // Parse each double
            List<double> doubles = new List<double>();
            foreach (string doubleString in doubleStrings)
            {
                if (!Utilities.TryParseDouble(doubleString, out var value))
                    throw new ApplicationException("Error parsing value: " + doubleString + " in string: " + doubleStrings);
                doubles.Add(value);
            }
            return doubles;
        }

        /// <summary> Retrieves the double value from the given node. </summary>
        /// <param name="node"> The node we are searching in </param>
        /// <param name="name"> The name of the node we are looking for </param>
        /// <returns> The double value represented by the string </returns>
        protected double GetSingleDValue(XmlNode node, string name)
        {
            // Get the string value
            string str = GetSingleValue(node, name);

            // Try to parse it to a double
            if (!Utilities.TryParseDouble(str, out var value))
                throw new ApplicationException("Error parsing value: " + str + " in XML node: " + name);

            return value;
        }

        /// <summary> XML document being loaded. </summary>
        protected XmlDocument _doc;
    }
}
