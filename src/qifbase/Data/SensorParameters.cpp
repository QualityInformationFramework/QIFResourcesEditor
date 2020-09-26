///////////////////////////////////////////////////////////////////////////////
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

#include "stdafx.h"
#include "SensorParameters.h"

using namespace std;

namespace qifbase
{
/// <summary> Default constructor. </summary>
/// <returns></returns>
SensorParameters::SensorParameters() :
    _name(L"<unnammed sensor>"),
    _type(SensorType::SingleTipFixed),
    _technology(SensorTechnology::SwitchingProbe),
    _activePerformanceTest(SensorPerformanceTest::NoProbeTest),
    _extensionLength(0),
    _aAngle(0),
    _bAngle(0),
    _bAngleAdjustment(0)
{
    _stylusLengths.push_back(50.0);
}

/// <summary> Copy constructor. </summary>
/// <param name="copy"> Object to copy </param>
SensorParameters::SensorParameters(const SensorParameters& copy)
{
    _name = copy._name;
    _type = copy._type;
    _technology = copy._technology;
    _activePerformanceTest = copy._activePerformanceTest;
    _perfTestIso10360 = copy._perfTestIso10360;
    _perfTestB89 = copy._perfTestB89;
    _perfTestVdiVde = copy._perfTestVdiVde;
    _perfTestSpecifiedStdDev = copy._perfTestSpecifiedStdDev;
    _stylusLengths = copy._stylusLengths;
    _extensionLength = copy._extensionLength;
    _aAngle = copy._aAngle;
    _bAngle = copy._bAngle;
    _bAngleAdjustment = copy._bAngleAdjustment;
}


/// <summary> Equality operator. </summary>
/// <param name="other"> Object to compare </param>
/// <returns> True if objects are equal, otherwise false </returns>
bool SensorParameters::operator==(const SensorParameters& other) const
{
    if(_name != other._name)
        return false;
    if(_type != other._type)
        return false;
    if(_perfTestIso10360 != other._perfTestIso10360)
        return false;
    if(_perfTestB89 != other._perfTestB89)
        return false;
    if(_perfTestVdiVde != other._perfTestVdiVde)
        return false;
    if(_perfTestSpecifiedStdDev != other._perfTestSpecifiedStdDev)
        return false;
    if(_stylusLengths != other._stylusLengths)
        return false;
    if(_type != other._type)
        return false;
    if(_type != other._type)
        return false;
    if(_technology != other._technology)
        return false;
    if(_activePerformanceTest != other._activePerformanceTest)
        return false;
    if(_extensionLength != other._extensionLength)
        return false;
    if(_aAngle != other._aAngle)
        return false;
    if(_bAngle != other._bAngle)
        return false;
    if(_bAngleAdjustment != other._bAngleAdjustment)
        return false;

    return true;
}

/// <summary> Gets the description for this probe in the given units </summary>
/// <param name="units"> Units </param>
/// <returns> Description </returns>
wstring SensorParameters::GetDescription(Units units) const
{
    wstring description = L"";
    wstring unitString = L" " + UnitsMethods::UnitString(units);

    // Sensor name, type, technology
    description += L"--------------------------------------------------------------------------------\n";
    description += L"Description for sensor: " + _name + L"\n";
    description += SensorTypeMethods::Name(_type) + L"\n";
    description += SensorTechnologyMethods::Name(_technology) + L"\n";

    // The stylus length(s)
    if(_type == SensorType::MultiTipFixed)
    {
        description += L"\nStylus Length #1: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[0])) + unitString + L"\n";
        description += L"Stylus Length #2: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[1])) + unitString + L"\n";
        description += L"Stylus Length #3: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[2])) + unitString + L"\n";
        description += L"Stylus Length #4: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[3])) + unitString + L"\n";
        description += L"Stylus Length #5: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[4])) + unitString + L"\n";
    }
    else
        description += L"\nStylus Length: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _stylusLengths[0])) + unitString + L"\n";

    // Extension Length
    if(_extensionLength != 0)
        description += L"\nExtension Length: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _extensionLength)) + unitString + L"\n";

    // The active performance test
    description += L"\nActive Performance Test: " + SensorPerformanceTestMethods::Name(_activePerformanceTest) + L"\n";

    // ISO 10360 numbers
    if(!_perfTestIso10360.empty())
        description += GetIso10360PerformanceTestDescription(units);

    // B89 numbers
    if(!_perfTestB89.empty())
    {
        description += L"\nASME B89.4.1 Performance Test Values:\n";
        description += L"\tRange of residuals to 49-point sphere fit: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestB89[0])) + unitString + L"\n";
        description += L"\t                    Stylus Length in Test: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestB89[1])) + unitString + L"\n";
    }

    // VdiVde numbers:
    if(!_perfTestVdiVde.empty())
    {
        description += L"\nVDI/VDE Performance Test Values:\n";
        description += L"\t95th percentile of absolute residual values of 50-point sphere fit: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestVdiVde[0])) + unitString + L"\n";
        description += L"\t                                             Stylus Length in Test: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestVdiVde[1])) + unitString + L"\n";
    }

    // Specified Standard Dev numbers
    if(!_perfTestSpecifiedStdDev.empty())
    {
        description += L"\nRandom Probe Error (1 sigma):\n";
        description += L"\t          Probe Error: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestSpecifiedStdDev[0])) + unitString + L"\n";
        description += L"\tStylus Length in Test: " + to_wstring(UnitsMethods::Convert(Units::mm, units, _perfTestSpecifiedStdDev[1])) + unitString + L"\n";
    }

    description += L"--------------------------------------------------------------------------------\n";
    return description;
}

/// <summary> Gets the description string for the ISO 10360 test. </summary>
/// <param name="units"> Units </param>
/// <returns> Description </returns>
wstring SensorParameters::GetIso10360PerformanceTestDescription(Units units) const
{
    if(_perfTestIso10360.empty())
        return wstring(L"");

    // Convert the values to world units
    vector<double> dataInWorldUnits;
    for(auto it = _perfTestIso10360.begin(); it != _perfTestIso10360.end(); it++)
        dataInWorldUnits.push_back(UnitsMethods::Convert(Units::mm, units, *it));

    // Build the string
    wstring description = L"";
    wstring unitString = wstring(L" " + UnitsMethods::UnitString(units));
    switch(_type)
    {
    case SensorType::SingleTipFixed:
        description += L"\nISO 10360-2 Performance Test Values:\n";
        description += L"\tRange of residuals to 25-point sphere fit: " + to_wstring(dataInWorldUnits[0]) + unitString + L"\n";
        description += L"\t                    Stylus Length in Test: " + to_wstring(dataInWorldUnits[1]) + unitString + L"\n";
        break;
    case SensorType::SingleTipArticulated:
        description += L"\nISO 10360-5 Performance Test Values:\n";
        description += L"\tFor Extension Length: 0 mm\n";
        description += L"\t\tMPE-AL: " + to_wstring(dataInWorldUnits[0]) + unitString + L"\n";
        description += L"\t\tMPE-AS: " + to_wstring(dataInWorldUnits[1]) + unitString + L"\n";
        description += L"\t\tMPE-AF: " + to_wstring(dataInWorldUnits[2]) + unitString + L"\n";
        description += L"\tFor Extension Length: 100 mm\n";
        description += L"\t\tMPE-AL: " + to_wstring(dataInWorldUnits[3]) + unitString + L"\n";
        description += L"\t\tMPE-AS: " + to_wstring(dataInWorldUnits[4]) + unitString + L"\n";
        description += L"\t\tMPE-AF: " + to_wstring(dataInWorldUnits[5]) + unitString + L"\n";
        description += L"\tFor Extension Length: 200 mm\n";
        description += L"\t\tMPE-AL: " + to_wstring(dataInWorldUnits[6]) + unitString + L"\n";
        description += L"\t\tMPE-AS: " + to_wstring(dataInWorldUnits[7]) + unitString + L"\n";
        description += L"\t\tMPE-AF: " + to_wstring(dataInWorldUnits[8]) + unitString + L"\n";
        description += L"\tFor Extension Length: 300 mm\n";
        description += L"\t\tMPE-AL: " + to_wstring(dataInWorldUnits[9]) + unitString + L"\n";
        description += L"\t\tMPE-AS: " + to_wstring(dataInWorldUnits[10]) + unitString + L"\n";
        description += L"\t\tMPE-AF: " + to_wstring(dataInWorldUnits[11]) + unitString + L"\n";
        description += L"\tMPE-AL = Largest range of center coordinates for the five 25-point spheres\n";
        description += L"\tMPE-AS = Deviation of the 125-point sphere fit diameter from calibrated diameter\n";
        description += L"\tMPE-AF = Range of residuals of the 125-point sphere fit\n";
        break;
    case SensorType::MultiTipFixed:
        description += L"\nISO 10360-5 Performance Test Values:\n";
        description += L"\tFor Stylus Length: 10 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[0]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[1]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[2]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 20 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[3]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[4]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[5]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 30 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[6]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[7]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[8]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 50 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[9]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[10]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[11]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 100 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[12]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[13]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[14]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 200 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[15]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[16]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[17]) + unitString + L"\n";
        description += L"\tFor Stylus Length: 400 mm\n";
        description += L"\t\tMPE-ML: " + to_wstring(dataInWorldUnits[18]) + unitString + L"\n";
        description += L"\t\tMPE-MS: " + to_wstring(dataInWorldUnits[19]) + unitString + L"\n";
        description += L"\t\tMPE-MF: " + to_wstring(dataInWorldUnits[20]) + unitString + L"\n";
        description += L"\tMPE-ML = Largest range of center coordinates for the five 25-point spheres\n";
        description += L"\tMPE-MS = Deviation of the 125-point sphere fit diameter from calibrated diameter\n";
        description += L"\tMPE-MF = Range of residuals of the 125-point sphere fit\n";
        break;
    }
    return description;
}
}
