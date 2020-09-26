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
#include "stdafx.h"
#include "CmmErrorB89.h"

namespace Qif
{
/// <summary> Constructor. </summary>
CmmErrorB89::CmmErrorB89()
{
    _data = new qifbase::CmmErrorB89();
}

/// <summary> Copy constructor. </summary>
/// <param name="other"> Object to copy </param>
CmmErrorB89::CmmErrorB89(CmmErrorB89^ other)
{
    _data = new qifbase::CmmErrorB89(*(other->_data));
}

/// <summary> Copy constructor. </summary>
/// <param name="other"> Object to copy </param>
CmmErrorB89::CmmErrorB89(const qifbase::CmmErrorB89& other)
{
    _data = new qifbase::CmmErrorB89(other);
}

/// <summary> Constructor </summary>
/// <param name="xLinearAccuracy"> Accuracy along the X axis </param>
/// <param name="yLinearAccuracy"> Accuracy along the Y axis </param>
/// <param name="zLinearAccuracy"> Accuracy along the Z axis </param>
/// <param name="volumetricPerformance"> Volumetric performance </param>
/// <param name="offsetVolumetricPerformance"> Offset volumetric performance </param>
/// <param name="repeatability"> Repeatability </param>
CmmErrorB89::CmmErrorB89(double xLinearAccuracy, double yLinearAccuracy, double zLinearAccuracy, double volumetricPerformance, double offsetVolumetricPerformance, double repeatability)
{
    _data = new qifbase::CmmErrorB89(xLinearAccuracy, yLinearAccuracy, zLinearAccuracy, volumetricPerformance, offsetVolumetricPerformance, repeatability);
}

/// <summary> Finalizer. </summary>
CmmErrorB89::!CmmErrorB89()
{
    delete _data;
}

/// <summary> Compares the object with the given one. </summary>
/// <param name="o"> Object to compare </param>
/// <returns> True if objects are equal, otherwise false </returns>
bool CmmErrorB89::Equals(Object^ o)
{
    CmmErrorB89^ other = dynamic_cast<CmmErrorB89^>(o);
    if(other == nullptr)
        return false;

    return (*_data == *(other->_data));
}
}
