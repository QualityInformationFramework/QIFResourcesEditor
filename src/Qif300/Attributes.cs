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
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace Qif300
{
    /// <summary> QIF extensions for AttributesType. </summary>
    static class Attributes
    {
        /// <summary> Finds an attribute of the given type and name. </summary>
        /// <typeparam name="T"> Type of attribute to find </typeparam>
        /// <param name="attributes"> Attributes </param>
        /// <param name="name"> Name of attribute to find </param>
        /// <returns></returns>
        public static T FindAttribute<T>(this qif30.AttributesType attributes, string name) where T : qif30.AttributeBaseType
        {
            if (attributes == null || attributes.Attribute == null)
                return null;

            foreach (var a in attributes.Attribute)
            {
                if ((a is T res))
                {
                    if (res.name == name)
                        return res;
                }
            }
            return null;
        }

        /// <summary> Finds a user attribute with the specified name and reads D1 array inside it. </summary>
        /// <param name="attributes"> Attributes </param>
        /// <param name="name"> Attribute name </param>
        /// <param name="elemName"> Name of XML element inside user attribute </param>
        /// <returns> D1 array values or null if attribute has not been found </returns>
        public static double[] FindAttributeD1Array(this qif30.AttributesType attributes, string name, string elemName)
        {
            var attr = FindAttribute<qif30.AttributeUserType>(attributes, name);
            if (attr != null && attr.Item is qif30.UserDataXMLType userAttr)
            {
                if(userAttr.Any != null && userAttr.Any.Length > 0 && userAttr.Any[0].Name == elemName)
                    return LoadD1Array(userAttr.Any[0]);
            }
            return null;
        }

        /// <summary> Adds a user attribute to specified attributes. </summary>
        /// <param name="attributes"> Attributes </param>
        /// <param name="name"> Name of attribute to add </param>
        /// <param name="element"> XML element to place inside user attribute </param>
        public static void AddUserAttribute(this qif30.AttributesType attributes, string name, XmlElement element)
        {
            attributes.Attribute = AddToArray(attributes.Attribute, new qif30.AttributeUserType()
            {
                name = name,
                Item = new qif30.UserDataXMLType() { Any = new XmlElement[] { element } }
            });
        }

        /// <summary> Adds a decimal attribute to the specified attributes </summary>
        /// <param name="attributes"> Attributes </param>
        /// <param name="name"> Name of attribute to add </param>
        /// <param name="value"> Value of attribute to add </param>
        public static void AddDecAttribute(this qif30.AttributesType attributes, string name, double value)
        {
            attributes.Attribute = AddToArray(attributes.Attribute, new qif30.AttributeD1Type()
            {
                name = name,
                value = value
            });
            attributes.n = (uint)attributes.Attribute.Length;
        }

        /// <summary> Adds a string attribute to the specified attributes </summary>
        /// <param name="attributes"> Attributes </param>
        /// <param name="name"> Name of attribute to add </param>
        /// <param name="value"> Value of attribute to add </param>
        public static void AddStringAttribute(this qif30.AttributesType attributes, string name, string value)
        {
            attributes.Attribute = AddToArray(attributes.Attribute, new qif30.AttributeStrType()
            {
                name = name,
                value = value
            });
            attributes.n = (uint)attributes.Attribute.Length;
        }

        /// <summary> Creates a new array by combining the specified array and the specified value. </summary>
        /// <typeparam name="T"> The type of elements in the array </typeparam>
        /// <param name="array"> Original array </param>
        /// <param name="value"> Value to add </param>
        /// <returns> Resulting array </returns>
        private static T[] AddToArray<T>(T[] array, T value)
        {
            return new List<T>(array ?? Enumerable.Empty<T>()) { value }.ToArray();
        }

        /// <summary> Loads a D1 array from the inner text of the specified XML element </summary>
        /// <param name="elem"> XML element to read array from </param>
        /// <returns> Read array or null of there were parsing errors </returns>
        private static double[] LoadD1Array(XmlElement elem)
        {
            var strValues = elem.InnerText.Split(' ');
            var resValues = new double[strValues.Length];
            for (int i = 0, n = strValues.Length; i < n; ++i)
            {
                var val = ParseDouble(strValues[i]);
                if (val.HasValue)
                    resValues[i] = val.Value;
                else
                    return null;
            }
            return resValues;
        }

        /// <summary> Parses a decimal value from the specified string </summary>
        /// <param name="s"> String to parse </param>
        /// <returns> Resulting value if parsed or null </returns>
        private static double? ParseDouble(string s)
        {
            if (double.TryParse(s, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out var val))
                return val;
            return null;
        }
    }
}
