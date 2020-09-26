#pragma once

#include "type_t.CProbingDeviceType.h"


namespace qif191
{

namespace t
{	

class CCMMType : public ::qif191::t::CProbingDeviceType
{
public:
	QIF191_EXPORT CCMMType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMType(CCMMType const& init);
	void operator=(CCMMType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CCMMType_altova_HomeLocation> HomeLocation;
	struct HomeLocation { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CCMMGeometryType, _altova_mi_t_altova_CCMMType_altova_MachineGeometry> MachineGeometry;
	struct MachineGeometry { typedef Iterator<t::CCMMGeometryType> iterator; };
	MemberElement<t::CCMMAxisDirectionsType, _altova_mi_t_altova_CCMMType_altova_AxisOrientation> AxisOrientation;
	struct AxisOrientation { typedef Iterator<t::CCMMAxisDirectionsType> iterator; };
	MemberElement<t::CCMMScalesType, _altova_mi_t_altova_CCMMType_altova_CMMScales> CMMScales;
	struct CMMScales { typedef Iterator<t::CCMMScalesType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CCMMType_altova_MaxWorkpieceHeight> MaxWorkpieceHeight;
	struct MaxWorkpieceHeight { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CCMMType_altova_MaxWorkpieceMass> MaxWorkpieceMass;
	struct MaxWorkpieceMass { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<t::CCMMSpeedsType, _altova_mi_t_altova_CCMMType_altova_JoystickSpeeds> JoystickSpeeds;
	struct JoystickSpeeds { typedef Iterator<t::CCMMSpeedsType> iterator; };
	MemberElement<t::CCMMSpeedsType, _altova_mi_t_altova_CCMMType_altova_CNCSpeeds> CNCSpeeds;
	struct CNCSpeeds { typedef Iterator<t::CCMMSpeedsType> iterator; };
	MemberElement<t::CRotaryTableType, _altova_mi_t_altova_CCMMType_altova_RotaryTable> RotaryTable;
	struct RotaryTable { typedef Iterator<t::CRotaryTableType> iterator; };
	MemberElement<t::CCMMAccuracyType, _altova_mi_t_altova_CCMMType_altova_NominalAccuracy> NominalAccuracy;
	struct NominalAccuracy { typedef Iterator<t::CCMMAccuracyType> iterator; };
	MemberElement<t::CCMMAccuracyType, _altova_mi_t_altova_CCMMType_altova_ActualAccuracy> ActualAccuracy;
	struct ActualAccuracy { typedef Iterator<t::CCMMAccuracyType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCMMType_altova_CarriageIds> CarriageIds;
	struct CarriageIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCMMType_altova_ToolIds> ToolIds;
	struct ToolIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMType
