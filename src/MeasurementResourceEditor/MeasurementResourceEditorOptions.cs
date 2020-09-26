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

namespace MeasurementResourceEditor
{
    /// <summary> Represents options of measurement resource editor. </summary>
    public class MeasurementResourceEditorOptions
    {
        /// <summary> The one and only MeasurementResourceEditorOptions object. </summary>
        public static MeasurementResourceEditorOptions Instance { get; } = new MeasurementResourceEditorOptions();

        /// <summary> Default constructor. Hidden for singleton class implementation. </summary>
        private MeasurementResourceEditorOptions() { }

        /// <summary> Gets the location for the error log files. </summary>
        public string Log4NetConfigFilePath => Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData) + @"\Measurement Resource Editor\log.config.xml";
    }
}
