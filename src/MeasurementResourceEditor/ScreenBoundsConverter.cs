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

using System.Windows;
using System.Windows.Media;

namespace MeasurementResourceEditor
{
    /// <summary> Screen bound converter. </summary>
    internal class ScreenBoundsConverter
    {
        /// <summary> Transformation matrix </summary>
        private Matrix _transform;

        /// <summary> Constructor. </summary>
        /// <param name="visual"> A visual object </param>
        public ScreenBoundsConverter(Visual visual)
        {
            _transform = PresentationSource.FromVisual(visual).CompositionTarget.TransformFromDevice;
        }

        /// <summary> Coverts bounds </summary>
        /// <param name="bounds"> Bounds to convert </param>
        /// <returns> Converted bounds </returns>
        public Rect ConvertBounds(System.Drawing.Rectangle bounds)
        {
            var result = new Rect(bounds.X, bounds.Y, bounds.Width, bounds.Height);
            result.Transform(_transform);
            return result;
        }
    }
}
