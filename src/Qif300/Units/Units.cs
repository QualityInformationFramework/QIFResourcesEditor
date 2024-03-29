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

namespace Qif300.Units
{
    /// <summary> Aggregates unit converters of different unit types. </summary>
    class FileUnits
    {
        /// <summary> Gets or sets length unit multi-converter. </summary>
        public IMultiConverter LengthConverter { get; set; }

        /// <summary> Gets or sets pressure unit multi-converter. </summary>
        public IMultiConverter PressureConverter { get; set; }

        /// <summary> Gets or sets temperature unit multi-converter. </summary>
        public IMultiConverter TemperatureConverter { get; set; }

        /// <summary> Loads a QIF length value type applying length unit converter. </summary>
        /// <param name="l"> Length value </param>
        /// <returns> Converted value </returns>
        public double? LoadLengthValue(qif30.LinearValueType l)
        {
            return LengthConverter?.Convert(l.linearUnit, l.Value);
        }

        /// <summary> Loads a QIF pressure value type applying pressure unit converter. </summary>
        /// <param name="l"> Pressure value </param>
        /// <returns> Converted value </returns>
        public double? LoadPressureValue(qif30.PressureValueType p)
        {
            return PressureConverter?.Convert(p.pressureUnit, p.Value);
        }

        /// <summary> Loads a QIF temperature value type applying temperature unit converter. </summary>
        /// <param name="l"> Temperature value </param>
        /// <returns> Converted value </returns>
        public double? LoadTemperatureValue(qif30.TemperatureValueType t)
        {
            return TemperatureConverter?.Convert(t.temperatureUnit, t.Value);
        }

        /// <summary> Loads a QIF point applying length unit converter. </summary>
        /// <param name="point"> Point </param>
        /// <returns> Converted point </returns>
        public T3<double>? LoadPoint(qif30.PointType point)
        {
            var numbers = Utilities.StringToPoint(point.Text);
            if (numbers == null)
                return null;

            var x = LengthConverter?.Convert(point.linearUnit, (decimal)numbers.Value.x);
            var y = LengthConverter?.Convert(point.linearUnit, (decimal)numbers.Value.y);
            var z = LengthConverter?.Convert(point.linearUnit, (decimal)numbers.Value.z);
            if (x.HasValue && y.HasValue && z.HasValue)
                return new T3<double>(x.Value, y.Value, z.Value);

            return null;
        }
    }
}
