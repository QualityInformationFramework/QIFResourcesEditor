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
    /// <summary> Base class for MRD document loaders. </summary>
    public class MrdXmlLoader
    {   
        /// <summary> Load an MRD XML file. </summary>
        /// <param name="filename"> The path of the MRD database file </param>
        public List<CmmParameters> LoadFile(string filename)
        {
            var loadedCmms = new List<CmmParameters>();
            try
            {
                // Load the file into an XmlDocument
                XmlDocument doc = new XmlDocument();
                doc.Load(filename);

                // Get the root element
                XmlElement rootElement = doc.DocumentElement;

                // Get the MRD version number of this file
                if (rootElement.Attributes == null)
                    throw new ApplicationException("Invalid MRD file " + filename + ".  No version found");
                XmlNode versionAttributeNode = rootElement.Attributes.GetNamedItem("Version");
                string version = (versionAttributeNode == null) ? "" : versionAttributeNode.Value;

                // Create a loader based on which version this file is.
                AMrdXmlLoader loader;
                switch (version)
                {
                    case "0":
                        loader = new MrdXmlLoaderV0(doc);
                        break;
                    case "1":
                        loader = new MrdXmlLoaderV1(doc);
                        break;
                    case "2":
                        loader = new MrdXmlLoaderV2(doc);
                        break;
                    default:
                        throw new ApplicationException("Invalid MRD file " + filename + ".  Unknown version");
                }

                // Load the contents of the file.
                loadedCmms = loader.Load(rootElement);
            }
            catch (Exception ex)
            {
                loadedCmms.Clear();
                throw ex;
            }

            return loadedCmms;
        }
    }
}
