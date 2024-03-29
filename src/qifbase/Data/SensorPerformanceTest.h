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

#pragma once
#include <string>
#include <stdexcept>

namespace qifbase
{
/// <summary> Type of sensor performance test. </summary>
enum SensorPerformanceTest
{
    /// <summary> ISO 10360. </summary>
    Iso10360Probe = 0,

    /// <summary> ASME B89. </summary>
    B89Probe,

    /// <summary> VDI/VDE. </summary>
    VdiVde,

    /// <summary> Specified standard deviation. </summary>
    SpecifiedStandardDeviation,

    /// <summary> No probe test. </summary>
    NoProbeTest
};

/// <summary> Methods for working with type of sensor performance test. </summary>
class SensorPerformanceTestMethods
{
public:
    /// <summary> Gets a string representation of the given type </summary>
    /// <param name="type"> Type of sensor performance test </param>
    /// <returns> String </returns>
    static std::wstring Name(SensorPerformanceTest type)
    {
        switch(type)
        {
        case SensorPerformanceTest::B89Probe:
            return L"B89";
        case SensorPerformanceTest::Iso10360Probe:
            return L"ISO 10360";
        case SensorPerformanceTest::SpecifiedStandardDeviation:
            return L"Random Probe Error (1 sigma)";
        case SensorPerformanceTest::VdiVde:
            return L"VDI/VDE";
        case SensorPerformanceTest::NoProbeTest:
            return L"No Probe Test";
        }
        throw std::invalid_argument("Unknown type in SensorPerformanceTestMethods::Name()");
    }
};
}
