// Copyright(c) Capvidia, 2020
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

#pragma once
#include <string>

namespace qifbase
{
/// <summary> Represents a length unit </summary>
enum Units
{
    /// <summary> Millimeters. </summary>
    mm = 0,

    /// <summary> Inches. </summary>
    inch,

    /// <summary> Meters. </summary>
    m
};

/// <summary> Methods for working with units </summary>
class UnitsMethods
{
public:
    /// <summary> Gets a string representation of the given units. </summary>
    /// <param name="unit"> unit </param>
    /// <returns> String </returns>
    static std::wstring UnitString(Units unit)
    {
        if(unit == Units::inch)
            return L"in";
        else if(unit == Units::m)
            return L"m";
        else if(unit == Units::mm)
            return L"mm";

        throw std::invalid_argument("Invalid unit type in UnitString()");
    }

    /// <summary> Converts length between units. </summary>
    /// <param name="convertFrom"> Source units </param>
    /// <param name="convertTo"> Destination units </param>
    /// <param name="value"> Value to convert </param>
    /// <returns> Converted value </returns>
    static double Convert(Units convertFrom, Units convertTo, double value)
    {
        if(convertFrom == convertTo)
            return value;

        // Convert the "from" value to mm
        double valueInMm = value;
        if(convertFrom == Units::inch)
            valueInMm *= 25.3995;
        else if(convertFrom == Units::m)
            valueInMm *= 1000.0;
        else if(convertFrom == Units::mm)
            valueInMm *= 1;
        else
            throw std::invalid_argument("Units::Convert(): Conversion from this type of unit not supported");

        // Convert to what we want out
        double result = valueInMm;
        if(convertTo == Units::inch)
            result = valueInMm / 25.3995;
        else if(convertTo == Units::m)
            result = valueInMm / 1000.0;
        else if(convertTo == Units::mm)
            result = valueInMm / 1;
        else
            throw std::invalid_argument("Units::Convert(): Conversion to this type of unit not supported");

        return result;
    }
};
}