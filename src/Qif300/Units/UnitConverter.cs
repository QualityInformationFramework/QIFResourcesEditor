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

namespace Qif300.Units
{
    /// <summary>
    /// Implementation of single converter with the following formula:
    /// VD = (VS + O)*F
    /// where:
    /// VD - value in destination unit
    /// VS - value in source unit
    /// </summary>
    class UnitConverter : SingleConverter
    {
        /// <summary> Constructor. </summary>
        /// <param name="name"> Source unit name </param>
        /// <param name="factor"> Conversion factor </param>
        /// <param name="offset"> Conversion offset </param>
        public UnitConverter(string name, decimal factor, decimal offset) : base(name)
        {
            Factor = factor;
            Offset = offset;
        }

        /// <summary> Gets conversion factor </summary>
        private decimal Factor { get; }

        /// <summary> Gets conversion offset </summary>
        private decimal Offset { get; }

        /// <summary> Converts the specified value from source units. </summary>
        /// <param name="value"> Value to convert in source unit </param>
        /// <returns> Converted value in destination unit </returns>
        public override double Convert(decimal value)
        {
            return (double)((value + Offset) * Factor);
        }

    }
}