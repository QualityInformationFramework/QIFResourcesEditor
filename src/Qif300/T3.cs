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

namespace Qif300
{
    /// <summary> Represents a triple of values of the same type. </summary>
    struct T3<T>
    {
        /// <summary> Constructor </summary>
        /// <param name="x"> X-value </param>
        /// <param name="y"> Y-value </param>
        /// <param name="z"> Z-value </param>
        public T3(T x, T y, T z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

        /// <summary> Constructor </summary>
        /// <param name="coordinates"> List of three coordinates </param>
        public T3(IReadOnlyList<T> coordinates)
        {
            x = coordinates[0];
            y = coordinates[1];
            z = coordinates[2];
        }

        /// <summary> X-value </summary>
        public T x;

        /// <summary> Y-value </summary>
        public T y;

        /// <summary> Z-value </summary>
        public T z;

        /// <summary> Creates array of coordinates </summary>
        /// <returns> Array of coordinates </returns>
        public T[] ToArray()
        {
            return new T[] { x, y, z };
        }
    }
}
