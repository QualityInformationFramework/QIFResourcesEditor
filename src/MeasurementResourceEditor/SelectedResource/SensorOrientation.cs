﻿///////////////////////////////////////////////////////////////////////////////
///
/// Copyright 2018-2020, Capvidia and QIF Resources contributors
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
using System.Windows.Media;
using System.Windows.Media.Imaging;
using MeasurementResourceEditor.MrdXml;
using Qif;

namespace MeasurementResourceEditor
{
    /// <summary> Sensor orientation. </summary>
    public enum SensorOrientation
    {
        /// <summary> Down. </summary>
        SensorDown = 0,

        /// <summary> Right. </summary>
        SensorRight,

        /// <summary> Out. </summary>
        SensorOut,

        /// <summary> Left. </summary>
        SensorLeft,

        /// <summary> In. </summary>
        SensorIn
    }

    /// <summary> Extension methods for the SensorOrientation enumeration. </summary>
    public static class SensorOrientationMethods
    {
        /// <summary> Returns a bitmap image representing the CS orientation. </summary>
        /// <param name="orientation"> Orientation </param>
        /// <returns> Image </returns>
        public static ImageSource GetImage(this SensorOrientation orientation)
        {
            string uri = "pack://application:,,,/MeasurementResourceEditor;component/images/" + orientation.ToString() + ".png";
            BitmapImage bitmapImage = new BitmapImage();
            bitmapImage.BeginInit();
            bitmapImage.UriSource = new Uri(uri);
            bitmapImage.EndInit();
            return bitmapImage;
        }

        /// <summary> Returns the next enumeration in the list, according to the type of probe we are looking at. </summary>
        /// <param name="orientation"> Orientation </param>
        /// <param name="sensorType"> Sensor type </param>
        /// <returns> Next value </returns>
        public static SensorOrientation Next(this SensorOrientation orientation, SensorType sensorType)
        {
            switch (orientation)
            {
                case SensorOrientation.SensorDown:
                    return SensorOrientation.SensorRight;
                case SensorOrientation.SensorRight:
                    return SensorOrientation.SensorOut;
                case SensorOrientation.SensorOut:
                    return SensorOrientation.SensorLeft;
                case SensorOrientation.SensorLeft:
                    return SensorOrientation.SensorIn;
                case SensorOrientation.SensorIn:
                    if (sensorType == SensorType.SingleTipFixed)
                        return SensorOrientation.SensorDown;
                    else
                        return SensorOrientation.SensorRight;
            }
            throw new InvalidOperationException();
        }

        /// <summary> Returns the previous enumeration in the list, according to the type of probe we are looking at. </summary>
        /// <param name="orientation"> Orientation </param>
        /// <param name="sensorType"> Sensor type </param>
        /// <returns></returns>
        public static SensorOrientation Previous(this SensorOrientation orientation, SensorType sensorType)
        {
            switch (orientation)
            {
                case SensorOrientation.SensorDown:
                    return SensorOrientation.SensorIn;
                case SensorOrientation.SensorRight:
                    if (sensorType == SensorType.SingleTipFixed)
                        return SensorOrientation.SensorDown;
                    else
                        return SensorOrientation.SensorIn;
                case SensorOrientation.SensorOut:
                    return SensorOrientation.SensorRight;
                case SensorOrientation.SensorLeft:
                    return SensorOrientation.SensorOut;
                case SensorOrientation.SensorIn:
                    return SensorOrientation.SensorLeft;
            }
            throw new InvalidOperationException();
        }
    }
}
