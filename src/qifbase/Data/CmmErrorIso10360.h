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
#include "../decl_qifbase.h"
#include <array>

#define ISO_CMM_ARTIFACT_POSITION_COUNT 7

namespace qifbase
{
/// <summary> Represents ISO 10360 performance test. </summary>
class QIFBASE_EXPORT CmmErrorIso10360
{
public:
    CmmErrorIso10360();
    CmmErrorIso10360(const CmmErrorIso10360& copy);

public:
    /// <summary> The type of values for the Error Of Indication. </summary>
    enum ErrorType
    {
        /// <summary> E = +/- [value] </summary>
        OneValue = 0,

        /// <summary> E = +/- [value1] + [value2] * (L (mm)) </summary>
        TwoValues,

        /// <summary> Both "OneValue" and "TwoValue" and the minimum of the two is taken. </summary>
        ThreeValues
    };

    /// <summary> Artifact Type </summary>
    enum ArtifactType
    {
        GageBlocks = 0,
        StepGage
    };

    /// <summary> Gage Block Stacking (only applicable for Gage Block artifact type). </summary>
    enum GageBlockStacking { Left = 0, Center, Right };

    // Artifact Positions     axis/face/body(a, f, b)
    //        8 -----------------------7
    //         /                     /|
    //        /                     / |
    //       /                     /  |
    //      /                     /   |
    //     /                     /    |
    //   5/_____________________/6    |
    //    |                     |     |
    //    |                     |     |
    //    |                     |     /3
    //    |      4              |    /
    //    |                     |   /
    //    |                     |  /
    //    |1                   2| /
    //    |_____________________|/
    enum ArtifactPosition
    {
        // Listed next to each enumeration is the convention used in MRD V1 for listing artifact positions.  Later, 
        // we simply use a ToString of the actual value.
        Unknown = 0,// Unknown u
        p1r2,	// 1  -> 2 a1
        p1c2,	// 1 <-> 2 a1
        p1l2,	// 1 <-  2 a1
        p1r3,	// 1  -> 3 f3
        p1c3,	// 1 <-> 3 f3
        p1l3,	// 1 <-  3 f3
        p1r4,	// 1  -> 4 a2
        p1c4,	// 1 <-> 4 a2
        p1l4,	// 1 <-  4 a2
        p1r5,	// 1  -> 5 a3
        p1c5,	// 1 <-> 5 a3
        p1l5,	// 1 <-  5 a3
        p1r6,	// 1  -> 6 f2
        p1c6,	// 1 <-> 6 f2
        p1l6,	// 1 <-  6 f2
        p1r7,	// 1  -> 7 b
        p1c7,	// 1 <-> 7 b
        p1l7,	// 1 <-  7 b
        p1r8,	// 1  -> 8 f1
        p1c8,	// 1 <-> 8 f1
        p1l8,	// 1 <-  8 f1
        p2r3,	// 2  -> 3 a2
        p2c3,	// 2 <-> 3 a2
        p2l3,	// 2 <-  3 a2
        p2r4,	// 2  -> 4 f3
        p2c4,	// 2 <-> 4 f3
        p2l4,	// 2 <-  4 f3
        p2r5,	// 2  -> 5 f2
        p2c5,	// 2 <-> 5 f2
        p2l5,	// 2 <-  5 f2
        p2r6,	// 2  -> 6 a3
        p2c6,	// 2 <-> 6 a3
        p2l6,	// 2 <-  6 a3
        p2r7,	// 2  -> 7 f1
        p2c7,	// 2 <-> 7 f1
        p2l7,	// 2 <-  7 f1
        p2r8,	// 2  -> 8 b
        p2c8,	// 2 <-> 8 b
        p2l8,	// 2 <-  8 b
        p3r4,	// 3  -> 4 a1
        p3c4,	// 3 <-> 4 a1
        p3l4,	// 3 <-  4 a1
        p3r5,	// 3  -> 5 b
        p3c5,	// 3 <-> 5 b
        p3l5,	// 3 <-  5 b
        p3r6,	// 3  -> 6 f1
        p3c6,	// 3 <-> 6 f1
        p3l6,	// 3 <-  6 f1
        p3r7,	// 3  -> 7 a3
        p3c7,	// 3 <-> 7 a3
        p3l7,	// 3 <-  7 a3
        p3r8,	// 3  -> 8 f2
        p3c8,	// 3 <-> 8 f2
        p3l8,	// 3 <-  8 f2
        p4r5,	// 4  -> 5 f1
        p4c5,	// 4 <-> 5 f1
        p4l5,	// 4 <-  5 f1
        p4r6,	// 4  -> 6 b
        p4c6,	// 4 <-> 6 b
        p4l6,	// 4 <-  6 b
        p4r7,	// 4  -> 7 f2
        p4c7,	// 4 <-> 7 f2
        p4l7,	// 4 <-  7 f2
        p4r8,	// 4  -> 8 a3
        p4c8,	// 4 <-> 8 a3
        p4l8,	// 4 <-  8 a3
        p5r6,	// 5  -> 6 a1
        p5c6,	// 5 <-> 6 a1
        p5l6,	// 5 <-  6 a1
        p5r7,	// 5  -> 7 f3
        p5c7,	// 5 <-> 7 f3
        p5l7,	// 5 <-  7 f3
        p5r8,	// 5  -> 8 a2
        p5c8,	// 5 <-> 8 a2
        p5l8,	// 5 <-  8 a2
        p6r7,	// 6  -> 7 a2
        p6c7,	// 6 <-> 7 a2
        p6l7,	// 6 <-  7 a2
        p6r8,	// 6  -> 8 f3
        p6c8,	// 6 <-> 8 f3
        p6l8,	// 6 <-  8 f3
        p7r8,	// 7  -> 8 a1
        p7c8,	// 7 <-> 8 a1
        p7l8	// 7 <-  8 a1
    };

public:
    // Gets the Artifact Position at the given index
    ArtifactPosition ArtifactPositionValue(int index) const;

    // Sets the Artifact Position at the given index
    void ArtifactPositionValue(int index, ArtifactPosition position);

    // Gets the Gage Block Stacking at the given index
    GageBlockStacking GageBlockStackingValue(int index) const;

    // Sets the Gage Block Stacking at the given index
    void GageBlockStackingValue(int index, GageBlockStacking stacking);

    // ArtifactPositionCount
    int ArtifactPositionCount() const { return ISO_CMM_ARTIFACT_POSITION_COUNT; }

    // Artifact
    ArtifactType Artifact() const { return _artifactType; }
    void Artifact(ArtifactType value) { _artifactType = value; }

    // ErrorOfIndicationType
    ErrorType ErrorOfIndicationType() const { return _errorOfIndicationType; }
    void ErrorOfIndicationType(ErrorType value) { _errorOfIndicationType = value; }

    // ErrorOfIndicationValue1
    double ErrorOfIndicationValue1() const { return _errorOfIndication1; }
    void ErrorOfIndicationValue1(double value) { _errorOfIndication1 = value; }

    // ErrorOfIndicationValue2
    double ErrorOfIndicationValue2() const { return _errorOfIndication2; }
    void ErrorOfIndicationValue2(double value) { _errorOfIndication2 = value; }

    // ErrorOfIndicationValue3
    double ErrorOfIndicationValue3() const { return _errorOfIndication3; }
    void ErrorOfIndicationValue3(double value) { _errorOfIndication3 = value; }

    // Equals override
    bool operator==(const CmmErrorIso10360& other) const;

private:
    // Artifact type
    ArtifactType _artifactType{GageBlocks};
    // Artifact positions
    std::array<ArtifactPosition, ISO_CMM_ARTIFACT_POSITION_COUNT> _artifactPositions;
    // Gage block stacking
    std::array<GageBlockStacking, ISO_CMM_ARTIFACT_POSITION_COUNT> _gageBlockStacking;
    // Error of indication type
    ErrorType _errorOfIndicationType{OneValue};
    // Base error of linear error
    double _errorOfIndication1{0};
    // Error rate of linear error
    double _errorOfIndication2{0};
    // Max error constant
    double _errorOfIndication3{0};
};
}
