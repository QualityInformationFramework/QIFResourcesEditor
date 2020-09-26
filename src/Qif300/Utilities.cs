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
    /// <summary> Class with auxiliary functions </summary>
    static class Utilities
    {
        /// <summary> Gets map from QIF CMM type to internal CMM type </summary>
        public static IDictionary<qif30.CartesianCMMGeometryEnumType, Qif.CmmType> CmmTypeMap => mCmmTypeMap;
        private static Dictionary<qif30.CartesianCMMGeometryEnumType, Qif.CmmType> mCmmTypeMap = new Dictionary<qif30.CartesianCMMGeometryEnumType, Qif.CmmType>()
        {
            {qif30.CartesianCMMGeometryEnumType.COLUMN, Qif.CmmType.Column},
            {qif30.CartesianCMMGeometryEnumType.FIXED_BRIDGE, Qif.CmmType.FixedBridge},
            {qif30.CartesianCMMGeometryEnumType.FIXED_TABLE_CANTILEVER_ARM, Qif.CmmType.FixedTableCantilever},
            {qif30.CartesianCMMGeometryEnumType.FIXED_TABLE_HORIZONTAL_ARM, Qif.CmmType.FixedTableHorizontalArm},
            {qif30.CartesianCMMGeometryEnumType.GANTRY, Qif.CmmType.Gantry},
            {qif30.CartesianCMMGeometryEnumType.L_SHAPED_BRIDGE, Qif.CmmType.LShapedBridge},
            {qif30.CartesianCMMGeometryEnumType.MOVING_BRIDGE, Qif.CmmType.MovingBridge},
            {qif30.CartesianCMMGeometryEnumType.MOVING_RAM_HORIZONTAL_ARM, Qif.CmmType.MovingRamHorizontalArm},
            {qif30.CartesianCMMGeometryEnumType.MOVING_TABLE_CANTILEVER_ARM, Qif.CmmType.MovingTableCantileverArm},
            {qif30.CartesianCMMGeometryEnumType.MOVING_TABLE_HORIZONTAL_ARM, Qif.CmmType.MovingTableHorizontalArm}
        };

        /// <summary> Gets map from QIF CMM direction type to internal CMM direction type </summary>
        public static IDictionary<qif30.CMMDirectionEnumType, Qif.CmmAxisOrientation> AxisDirectionMap => mAxisDirectionMap;
        private static Dictionary<qif30.CMMDirectionEnumType, Qif.CmmAxisOrientation> mAxisDirectionMap = new Dictionary<qif30.CMMDirectionEnumType, Qif.CmmAxisOrientation>()
        {
            {qif30.CMMDirectionEnumType.BACK, Qif.CmmAxisOrientation.PlusB},
            {qif30.CMMDirectionEnumType.DOWN, Qif.CmmAxisOrientation.MinusC},
            {qif30.CMMDirectionEnumType.FRONT, Qif.CmmAxisOrientation.MinusB},
            {qif30.CMMDirectionEnumType.LEFT, Qif.CmmAxisOrientation.MinusA},
            {qif30.CMMDirectionEnumType.RIGHT, Qif.CmmAxisOrientation.PlusA},
            {qif30.CMMDirectionEnumType.UP, Qif.CmmAxisOrientation.PlusC}
        };

        /// <summary> Gets map from QIF scale type to internal scale type </summary>
        public static IDictionary<qif30.TypeOfScaleEnumType, Qif.CmmScalesType> CmmScalesMap => mCmmScalesMap;
        private static Dictionary<qif30.TypeOfScaleEnumType, Qif.CmmScalesType> mCmmScalesMap = new Dictionary<qif30.TypeOfScaleEnumType, Qif.CmmScalesType>()
        {
            {qif30.TypeOfScaleEnumType.ELECTROOPTICAL_LINEAR, Qif.CmmScalesType.Standard},
            {qif30.TypeOfScaleEnumType.LASER_INTERFEROMETER_LINEAR, Qif.CmmScalesType.Laser}
        };

        /// <summary> Gets bidirectional map between software compensation type and its string representation </summary>
        public static MapEnumString<Qif.CmmSoftwareCompensationType> CmmSoftwareCompensationStrMap { get; } = new MapEnumString<Qif.CmmSoftwareCompensationType>(new Dictionary<Qif.CmmSoftwareCompensationType, string>()
        {
            {Qif.CmmSoftwareCompensationType.CmmOnly, "CMM_ONLY" },
            {Qif.CmmSoftwareCompensationType.FullCompensation, "FULL" },
            {Qif.CmmSoftwareCompensationType.NoCompensation, "NONE" },
            {Qif.CmmSoftwareCompensationType.SingleTemperatureAssumed, "SINGLE" }
        });

        /// <summary> Gets bidirectional map between sensor technology type and its string representation </summary>
        public static MapEnumString<Qif.SensorTechnology> SensorTechnologyStrMap { get; } = new MapEnumString<Qif.SensorTechnology>(new Dictionary<Qif.SensorTechnology, string>()
        {
            {Qif.SensorTechnology.PiezoelectricProbe, "PIEZOELECTRIC_PROBE"},
            {Qif.SensorTechnology.SwitchingProbe, "SWITCHING_PROBE"}
        });

        /// <summary> Gets bidirectional map between type of sensor performance test and its string representation </summary>
        public static MapEnumString<Qif.SensorPerformanceTest> SensorPerfomanceTestStrMap { get; } = new MapEnumString<Qif.SensorPerformanceTest>(new Dictionary<Qif.SensorPerformanceTest, string>()
        {
            {Qif.SensorPerformanceTest.Iso10360, "ISO_10360"},
            {Qif.SensorPerformanceTest.B89, "B89"},
            {Qif.SensorPerformanceTest.VdiVde, "VDI_VDE"},
            {Qif.SensorPerformanceTest.SpecifiedStandardDeviation, "SPECIFIED_STANDARD_DEVIATION"},
            {Qif.SensorPerformanceTest.None, "NONE"}
        });

        /// <summary>
        /// Gets bidirectional map between sensor type and its string representation
        /// Only types that need a UDA are presented
        /// </summary>
        public static MapEnumString<Qif.SensorType> SensorTypeUdaStrMap { get; } = new MapEnumString<Qif.SensorType>(new Dictionary<Qif.SensorType, string>()
        {
            { Qif.SensorType.MultiTipFixed, "MULTI_TIP_FIXED"},
            { Qif.SensorType.SingleTipArticulated, "SINGLE_TIP_ARTICULATED"}
        });

        public static readonly string[] CoordinateNames = new string[] { "X", "Y", "Z" };

        /// <summary> Checks whether the specified values are equal </summary>
        /// <param name="a"> The first specified value </param>
        /// <param name="b"> The second specified value </param>
        /// <param name="c"> The third specified value </param>
        /// <returns></returns>
        public static bool AreEqual(decimal a, decimal b, decimal c)
        {
            return a == b && b == c;
        }

        /// <summary> Converts string to three-dimensional point </summary>
        /// <param name="val"> String value </param>
        /// <returns> Three-dimensional point or null if conversion is impossible </returns>
        public static T3<double>? StringToPoint(string val)
        {
            if (string.IsNullOrEmpty(val))
                return null;

            var str = val.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            if (str.Length != 3)
                return null;

            var res = new double[3];
            for (int i = 0; i < 3; ++i)
            {
                if (double.TryParse(str[i], System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out var c))
                    res[i] = c;
                else
                    return null;
            }

            return new T3<double>(res[0], res[1], res[2]);
        }

        /// <summary> Converts the specified three-dimensional point to string </summary>
        /// <param name="point"> The point to convert </param>
        /// <returns> String representation of the point </returns>
        public static string PointToString(T3<double> point)
        {
            var sx = point.x.ToString(System.Globalization.CultureInfo.InvariantCulture);
            var sy = point.y.ToString(System.Globalization.CultureInfo.InvariantCulture);
            var sz = point.z.ToString(System.Globalization.CultureInfo.InvariantCulture);
            return $"{sx} {sy} {sz}";
        }

        /// <summary> Converts the given array of decimal values to string </summary>
        /// <param name="values"> The array of decimal values to convert </param>
        /// <returns> String representation of the array </returns>
        public static string D1ArrayToString(IEnumerable<double> values)
        {
            var sb = new StringBuilder();
            foreach (var v in values)
                sb.AppendFormat("{0} ", v.ToString(System.Globalization.CultureInfo.InvariantCulture));
            sb.Remove(sb.Length - 1, 1);
            return sb.ToString();
        }

        /// <summary> Creates linear value object by the specified value in mm </summary>
        /// <param name="valueMm"> Value in mm </param>
        /// <returns> Linear value object </returns>
        public static qif30.LinearValueType CreateLinearValue(double valueMm)
        {
            return new qif30.LinearValueType() { Value = (decimal)valueMm };
        }

        /// <summary> Creates QIF temperature value with primary unit. </summary>
        /// <param name="t"> Temperature </param>
        /// <returns> QIF temperature value </returns>
        public static qif30.TemperatureValueType CreateTemperatureValue(double t)
        {
            return new qif30.TemperatureValueType() { Value = (decimal)t };
        }

        /// <summary> Creates QIF pressure value with primary unit. </summary>
        /// <param name="p"> Pressure </param>
        /// <returns> QIF pressure value </returns>
        public static qif30.PressureValueType CreatePressureValueType(double p)
        {
            return new qif30.PressureValueType() { Value = (decimal)p };
        }

        /// <summary> Creates QIF specified decimal value. </summary>
        /// <param name="value"> Value </param>
        /// <returns> QIF specified decimal value </returns>
        public static qif30.SpecifiedDecimalType CreateDecimal(double value)
        {
            return new qif30.SpecifiedDecimalType() { Value = (decimal)value };
        }

        /// <summary> Creates QIF unit vector object. </summary>
        /// <param name="vector"> Vector </param>
        /// <returns> QIF unit vector object </returns>
        public static qif30.UnitVectorType CreateUnitVector(T3<double> vector)
        {
            return new qif30.UnitVectorType() { Text = PointToString(vector) };
        }

        /// <summary> Creates QIF point object with primary unit. </summary>
        /// <param name="point"> Point </param>
        /// <returns> QIF point object </returns>
        public static qif30.PointType CreatePoint(T3<double> point)
        {
            return new qif30.PointType() { Text = PointToString(point) };
        }

        /// <summary> Finds largest identifier from measurement resources. </summary>
        /// <param name="measurementResources"> Measurement resources </param>
        /// <returns> Largest identifier </returns>
        public static uint FindMaximumId(qif30.MeasurementResourcesType measurementResources)
        {
            if (measurementResources == null)
                return 0;
            uint max = 0;

            // go through measurement devices
            if (measurementResources.MeasurementDevices?.MeasurementDevice != null)
            {
                foreach (var cmm in measurementResources.MeasurementDevices.MeasurementDevice)
                    max = Math.Max(max, cmm.id);
            }

            // go through sensors
            if(measurementResources?.DetachableSensors?.DetachableSensor != null)
            {
                foreach (var s in measurementResources.DetachableSensors.DetachableSensor)
                    max = Math.Max(max, s.id);
            }

            return max;
        }
    }
}
