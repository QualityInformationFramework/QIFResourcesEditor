#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicNominalsType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicNominalsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicNominalsType(CCharacteristicNominalsType const& init);
	void operator=(CCharacteristicNominalsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicNominalsType); }
	MemberElement<t::CCharacteristicNominalBaseType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_CharacteristicNominal> CharacteristicNominal;
	struct CharacteristicNominal { typedef Iterator<t::CCharacteristicNominalBaseType> iterator; };
	MemberElement<t::CAngleBetweenCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_AngleBetweenCharacteristicNominal> AngleBetweenCharacteristicNominal;
	struct AngleBetweenCharacteristicNominal { typedef Iterator<t::CAngleBetweenCharacteristicNominalType> iterator; };
	MemberElement<t::CAngleCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_AngleCharacteristicNominal> AngleCharacteristicNominal;
	struct AngleCharacteristicNominal { typedef Iterator<t::CAngleCharacteristicNominalType> iterator; };
	MemberElement<t::CAngleFromCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_AngleFromCharacteristicNominal> AngleFromCharacteristicNominal;
	struct AngleFromCharacteristicNominal { typedef Iterator<t::CAngleFromCharacteristicNominalType> iterator; };
	MemberElement<t::CAngularCoordinateCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_AngularCoordinateCharacteristicNominal> AngularCoordinateCharacteristicNominal;
	struct AngularCoordinateCharacteristicNominal { typedef Iterator<t::CAngularCoordinateCharacteristicNominalType> iterator; };
	MemberElement<t::CAngularityCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_AngularityCharacteristicNominal> AngularityCharacteristicNominal;
	struct AngularityCharacteristicNominal { typedef Iterator<t::CAngularityCharacteristicNominalType> iterator; };
	MemberElement<t::CChordCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_ChordCharacteristicNominal> ChordCharacteristicNominal;
	struct ChordCharacteristicNominal { typedef Iterator<t::CChordCharacteristicNominalType> iterator; };
	MemberElement<t::CCircularRunoutCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_CircularRunoutCharacteristicNominal> CircularRunoutCharacteristicNominal;
	struct CircularRunoutCharacteristicNominal { typedef Iterator<t::CCircularRunoutCharacteristicNominalType> iterator; };
	MemberElement<t::CCircularityCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_CircularityCharacteristicNominal> CircularityCharacteristicNominal;
	struct CircularityCharacteristicNominal { typedef Iterator<t::CCircularityCharacteristicNominalType> iterator; };
	MemberElement<t::CConcentricityCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_ConcentricityCharacteristicNominal> ConcentricityCharacteristicNominal;
	struct ConcentricityCharacteristicNominal { typedef Iterator<t::CConcentricityCharacteristicNominalType> iterator; };
	MemberElement<t::CCurveLengthCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_CurveLengthCharacteristicNominal> CurveLengthCharacteristicNominal;
	struct CurveLengthCharacteristicNominal { typedef Iterator<t::CCurveLengthCharacteristicNominalType> iterator; };
	MemberElement<t::CCylindricityCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_CylindricityCharacteristicNominal> CylindricityCharacteristicNominal;
	struct CylindricityCharacteristicNominal { typedef Iterator<t::CCylindricityCharacteristicNominalType> iterator; };
	MemberElement<t::CDepthCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_DepthCharacteristicNominal> DepthCharacteristicNominal;
	struct DepthCharacteristicNominal { typedef Iterator<t::CDepthCharacteristicNominalType> iterator; };
	MemberElement<t::CDiameterCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_DiameterCharacteristicNominal> DiameterCharacteristicNominal;
	struct DiameterCharacteristicNominal { typedef Iterator<t::CDiameterCharacteristicNominalType> iterator; };
	MemberElement<t::CDistanceBetweenCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_DistanceBetweenCharacteristicNominal> DistanceBetweenCharacteristicNominal;
	struct DistanceBetweenCharacteristicNominal { typedef Iterator<t::CDistanceBetweenCharacteristicNominalType> iterator; };
	MemberElement<t::CDistanceFromCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_DistanceFromCharacteristicNominal> DistanceFromCharacteristicNominal;
	struct DistanceFromCharacteristicNominal { typedef Iterator<t::CDistanceFromCharacteristicNominalType> iterator; };
	MemberElement<t::CFlatnessCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_FlatnessCharacteristicNominal> FlatnessCharacteristicNominal;
	struct FlatnessCharacteristicNominal { typedef Iterator<t::CFlatnessCharacteristicNominalType> iterator; };
	MemberElement<t::CHeightCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_HeightCharacteristicNominal> HeightCharacteristicNominal;
	struct HeightCharacteristicNominal { typedef Iterator<t::CHeightCharacteristicNominalType> iterator; };
	MemberElement<t::CLengthCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_LengthCharacteristicNominal> LengthCharacteristicNominal;
	struct LengthCharacteristicNominal { typedef Iterator<t::CLengthCharacteristicNominalType> iterator; };
	MemberElement<t::CLineProfileCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_LineProfileCharacteristicNominal> LineProfileCharacteristicNominal;
	struct LineProfileCharacteristicNominal { typedef Iterator<t::CLineProfileCharacteristicNominalType> iterator; };
	MemberElement<t::CLinearCoordinateCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_LinearCoordinateCharacteristicNominal> LinearCoordinateCharacteristicNominal;
	struct LinearCoordinateCharacteristicNominal { typedef Iterator<t::CLinearCoordinateCharacteristicNominalType> iterator; };
	MemberElement<t::CParallelismCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_ParallelismCharacteristicNominal> ParallelismCharacteristicNominal;
	struct ParallelismCharacteristicNominal { typedef Iterator<t::CParallelismCharacteristicNominalType> iterator; };
	MemberElement<t::CPerpendicularityCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_PerpendicularityCharacteristicNominal> PerpendicularityCharacteristicNominal;
	struct PerpendicularityCharacteristicNominal { typedef Iterator<t::CPerpendicularityCharacteristicNominalType> iterator; };
	MemberElement<t::CPointProfileCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_PointProfileCharacteristicNominal> PointProfileCharacteristicNominal;
	struct PointProfileCharacteristicNominal { typedef Iterator<t::CPointProfileCharacteristicNominalType> iterator; };
	MemberElement<t::CPositionCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_PositionCharacteristicNominal> PositionCharacteristicNominal;
	struct PositionCharacteristicNominal { typedef Iterator<t::CPositionCharacteristicNominalType> iterator; };
	MemberElement<t::CRadiusCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_RadiusCharacteristicNominal> RadiusCharacteristicNominal;
	struct RadiusCharacteristicNominal { typedef Iterator<t::CRadiusCharacteristicNominalType> iterator; };
	MemberElement<t::CSquareCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_SquareCharacteristicNominal> SquareCharacteristicNominal;
	struct SquareCharacteristicNominal { typedef Iterator<t::CSquareCharacteristicNominalType> iterator; };
	MemberElement<t::CStraightnessCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_StraightnessCharacteristicNominal> StraightnessCharacteristicNominal;
	struct StraightnessCharacteristicNominal { typedef Iterator<t::CStraightnessCharacteristicNominalType> iterator; };
	MemberElement<t::CSurfaceProfileCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_SurfaceProfileCharacteristicNominal> SurfaceProfileCharacteristicNominal;
	struct SurfaceProfileCharacteristicNominal { typedef Iterator<t::CSurfaceProfileCharacteristicNominalType> iterator; };
	MemberElement<t::CSurfaceProfileNonUniformCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_SurfaceProfileNonUniformCharacteristicNominal> SurfaceProfileNonUniformCharacteristicNominal;
	struct SurfaceProfileNonUniformCharacteristicNominal { typedef Iterator<t::CSurfaceProfileNonUniformCharacteristicNominalType> iterator; };
	MemberElement<t::CSurfaceTextureCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_SurfaceTextureCharacteristicNominal> SurfaceTextureCharacteristicNominal;
	struct SurfaceTextureCharacteristicNominal { typedef Iterator<t::CSurfaceTextureCharacteristicNominalType> iterator; };
	MemberElement<t::CSymmetryCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_SymmetryCharacteristicNominal> SymmetryCharacteristicNominal;
	struct SymmetryCharacteristicNominal { typedef Iterator<t::CSymmetryCharacteristicNominalType> iterator; };
	MemberElement<t::CThicknessCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_ThicknessCharacteristicNominal> ThicknessCharacteristicNominal;
	struct ThicknessCharacteristicNominal { typedef Iterator<t::CThicknessCharacteristicNominalType> iterator; };
	MemberElement<t::CThreadCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_ThreadCharacteristicNominal> ThreadCharacteristicNominal;
	struct ThreadCharacteristicNominal { typedef Iterator<t::CThreadCharacteristicNominalType> iterator; };
	MemberElement<t::CTotalRunoutCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_TotalRunoutCharacteristicNominal> TotalRunoutCharacteristicNominal;
	struct TotalRunoutCharacteristicNominal { typedef Iterator<t::CTotalRunoutCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedAngularCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedAngularCharacteristicNominal> UserDefinedAngularCharacteristicNominal;
	struct UserDefinedAngularCharacteristicNominal { typedef Iterator<t::CUserDefinedAngularCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedAreaCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedAreaCharacteristicNominal> UserDefinedAreaCharacteristicNominal;
	struct UserDefinedAreaCharacteristicNominal { typedef Iterator<t::CUserDefinedAreaCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedAttributeCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedAttributeCharacteristicNominal> UserDefinedAttributeCharacteristicNominal;
	struct UserDefinedAttributeCharacteristicNominal { typedef Iterator<t::CUserDefinedAttributeCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedForceCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedForceCharacteristicNominal> UserDefinedForceCharacteristicNominal;
	struct UserDefinedForceCharacteristicNominal { typedef Iterator<t::CUserDefinedForceCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedLinearCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedLinearCharacteristicNominal> UserDefinedLinearCharacteristicNominal;
	struct UserDefinedLinearCharacteristicNominal { typedef Iterator<t::CUserDefinedLinearCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedMassCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedMassCharacteristicNominal> UserDefinedMassCharacteristicNominal;
	struct UserDefinedMassCharacteristicNominal { typedef Iterator<t::CUserDefinedMassCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedPressureCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedPressureCharacteristicNominal> UserDefinedPressureCharacteristicNominal;
	struct UserDefinedPressureCharacteristicNominal { typedef Iterator<t::CUserDefinedPressureCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedSpeedCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedSpeedCharacteristicNominal> UserDefinedSpeedCharacteristicNominal;
	struct UserDefinedSpeedCharacteristicNominal { typedef Iterator<t::CUserDefinedSpeedCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedTemperatureCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedTemperatureCharacteristicNominal> UserDefinedTemperatureCharacteristicNominal;
	struct UserDefinedTemperatureCharacteristicNominal { typedef Iterator<t::CUserDefinedTemperatureCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedTimeCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedTimeCharacteristicNominal> UserDefinedTimeCharacteristicNominal;
	struct UserDefinedTimeCharacteristicNominal { typedef Iterator<t::CUserDefinedTimeCharacteristicNominalType> iterator; };
	MemberElement<t::CUserDefinedUnitCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_UserDefinedUnitCharacteristicNominal> UserDefinedUnitCharacteristicNominal;
	struct UserDefinedUnitCharacteristicNominal { typedef Iterator<t::CUserDefinedUnitCharacteristicNominalType> iterator; };
	MemberElement<t::CWidthCharacteristicNominalType, _altova_mi_t_altova_CCharacteristicNominalsType_altova_WidthCharacteristicNominal> WidthCharacteristicNominal;
	struct WidthCharacteristicNominal { typedef Iterator<t::CWidthCharacteristicNominalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicNominalsType
