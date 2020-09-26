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
    /// <summary> Map between a string and enumeration with two-directional search. </summary>
    /// <typeparam name="E"></typeparam>
    public class MapEnumString<E> where E : struct
    {
        /// <summary> Constructor </summary>
        /// <param name="map"> Map from enumeration value to string </param>
        public MapEnumString(IDictionary<E, string> map)
        {
            Map = map;
        }

        /// <summary> Gets string by enumeration value </summary>
        /// <param name="e"> Enumeration value </param>
        /// <returns></returns>
        public string ToString(E e)
        {
            return Map[e];
        }

        /// <summary> Gets enumeration values by the specified string if its presented </summary>
        /// <param name="s"> String </param>
        /// <returns> Enumeration value or null if map does not contain the specified string </returns>
        public E? TryGetEnum(string s)
        {
            try
            {
                return ToEnum(s);
            }
            catch (Exception)
            {
                return null;
            }
        }

        /// <summary> Gets enumeration value by the specified string </summary>
        /// <param name="s"> String </param>
        /// <returns> Enumeration value </returns>
        public E ToEnum(string s)
        {
            foreach (var v in Map)
            {
                if (v.Value == s)
                    return v.Key;
            }
            throw new Exception($"{s} is an invalid value");
        }

        /// <summary> Map from enumeration value to string </summary>
            private IDictionary<E, string> Map { get; set; }
    }
}
