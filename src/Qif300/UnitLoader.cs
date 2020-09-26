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
using Qif300.Units;

namespace Qif300
{
    /// <summary> Provides functionality for loading QIF units to converters of corresponding units for Measurement Resource Editor. </summary>
    class UnitLoader
    {
        /// <summary> Constructor </summary>
        /// <param name="fileUnits"> QIF units object </param>
        /// <param name="errors"> Error container </param>
        public UnitLoader(qif30.FileUnitsType fileUnits, LoadingErrors errors)
        {
            FileUnints = fileUnits;
            Errors = errors;
        }

        /// <summary> Loads length unit converter from QIF length units </summary>
        /// <returns> Length unit converter </returns>
        public IMultiConverter LoadLinearConverters()
        {
            var res = new FileUnitConverter();

            // load primary units
            if (PrimaryUnits == null || PrimaryUnits.LinearUnit == null)
                res.PrimaryConverter = new UnitConverter("m", 1000, 0);
            else
                res.PrimaryConverter = LoadLinearUnitConverter(PrimaryUnits.LinearUnit);

            // load other units
            var otherUnits = OtherUnits?.LinearUnit;
            if (otherUnits != null)
            {
                foreach (var lu in otherUnits)
                {
                    var converter = LoadLinearUnitConverter(lu);
                    if (converter != null)
                        res.OtherConverters.Add(converter);
                }
            }

            return res;
        }

        /// <summary> Loads pressure unit converter from QIF pressure units </summary>
        /// <returns> Pressure unit converter </returns>
        public IMultiConverter LoadPressureConveters()
        {
            var res = new FileUnitConverter();

            // load primary units
            if (PrimaryUnits == null || PrimaryUnits.PressureUnit == null)
                res.PrimaryConverter = new UnitConverter("pa", 1M / 1000, 0);
            else
                res.PrimaryConverter = LoadPressureUnitConverter(PrimaryUnits.PressureUnit);

            // load other units
            var otherUnits = OtherUnits?.PressureUnit;
            if (otherUnits != null)
            {
                foreach (var lu in otherUnits)
                {
                    var converter = LoadPressureUnitConverter(lu);
                    if (converter != null)
                        res.OtherConverters.Add(converter);
                }
            }

            return res;
        }

        /// <summary> Loads temperature unit converter from QIF temperature units </summary>
        /// <returns> Temperature unit converter </returns>
        public IMultiConverter LoadTemperatureConveters()
        {
            var res = new FileUnitConverter();

            // load primary units
            if (PrimaryUnits == null || PrimaryUnits.TemperatureUnit == null)
                res.PrimaryConverter = new UnitConverter("kelvin", 1, -273.15M);
            else
                res.PrimaryConverter = LoadTemperatureUnitConverter(PrimaryUnits.TemperatureUnit);

            // load other units
            var otherUnits = OtherUnits?.TemperatureUnit;
            if (otherUnits != null)
            {
                foreach (var lu in otherUnits)
                {
                    var converter = LoadTemperatureUnitConverter(lu);
                    if (converter != null)
                        res.OtherConverters.Add(converter);
                }
            }

            return res;
        }

        /// <summary> Loads length unit converter from QIF length unit </summary>
        /// <returns> Length unit converter </returns>
        private SingleConverter LoadLinearUnitConverter(qif30.LinearUnitType qifUnit)
        {
            var name = qifUnit.UnitName;
            if (string.IsNullOrEmpty(name))
            {
                Errors.AddError("Error loading length unit", "Length unit does not have a name");
                return null;
            }

            // try load by name
            var c = UnitConverters.CreateLength(name);

            // try to load by conversion values
            // multiply factor by 1000 since the QIF conversion specifies a factor to convert values to meters
            var conversion = qifUnit.UnitConversion;
            if (c == null && conversion != null)
                c = new UnitConverter(name, conversion.Factor * 1000, conversion.Offset);

            if (c == null)
                Errors.AddError("Error loading length unit", "Unknown unit does not have conversion values");

            return c;
        }

        /// <summary> Loads pressure unit converter from QIF pressure unit </summary>
        /// <returns> Pressure unit converter </returns>
        private SingleConverter LoadPressureUnitConverter(qif30.PressureUnitType qifUnit)
        {
            var name = qifUnit.UnitName;
            if (string.IsNullOrEmpty(name))
            {
                Errors.AddError("Error loading pressure unit", "Pressure unit does not have a name");
                return null;
            }

            // try load by name
            var c = UnitConverters.CreatePressure(name);

            // try to load by conversion values
            // divide factor by 1000 since the QIF conversion specifies a factor to convert values to pascals
            var conversion = qifUnit.UnitConversion;
            if (c == null && conversion != null)
                c = new UnitConverter(name, conversion.Factor / 1000, conversion.Offset);

            if (c == null)
                Errors.AddError("Error loading pressure unit", "Unknown unit does not have conversion values");

            return c;
        }

        /// <summary> Loads temperature unit converter from QIF temperature unit </summary>
        /// <returns> Temperature unit converter </returns>
        private SingleConverter LoadTemperatureUnitConverter(qif30.TemperatureUnitType qifUnit)
        {
            var name = qifUnit.UnitName;
            if (string.IsNullOrEmpty(name))
            {
                Errors.AddError("Error loading temperature unit", "Temperature unit does not have a name");
                return null;
            }

            // try load by name
            var c = UnitConverters.CreateTemperature(name);

            // try to load by conversion values
            // subtract from offset -273.15/factor since the QIF conversion specifies a offset to convert values to Kelvins
            var conversion = qifUnit.UnitConversion;
            if (c == null && conversion != null && conversion.Factor != 0)
                c = new UnitConverter(name, conversion.Factor, conversion.Offset - 273.15M / conversion.Factor);

            if (c == null)
                Errors.AddError("Error loading temperature unit", "Unknown unit does not have conversion values");

            return c;
        }

        /// <summary> Gets QIF other units object </summary>
        private qif30.OtherUnitsType OtherUnits => FileUnints?.OtherUnits;

        /// <summary> Gets QIF primary units object </summary>
        private qif30.PrimaryUnitsType PrimaryUnits => FileUnints?.PrimaryUnits;

        /// <summary> Gets QIF file units object </summary>
        private qif30.FileUnitsType FileUnints { get; }

        /// <summary> Gets error container </summary>
        private LoadingErrors Errors { get; }
    }


}
