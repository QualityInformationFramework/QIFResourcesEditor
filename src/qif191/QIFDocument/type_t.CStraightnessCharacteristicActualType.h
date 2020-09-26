#pragma once

#include "type_t.CFormCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CStraightnessCharacteristicActualType : public ::qif191::t::CFormCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CStraightnessCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessCharacteristicActualType(CStraightnessCharacteristicActualType const& init);
	void operator=(CStraightnessCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessCharacteristicActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CStraightnessCharacteristicActualType_altova_MaxStraightness> MaxStraightness;
	struct MaxStraightness { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CStraightnessCharacteristicActualType_altova_ZoneOrientation> ZoneOrientation;
	struct ZoneOrientation { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualZoneAxisType, _altova_mi_t_altova_CStraightnessCharacteristicActualType_altova_ZoneLine> ZoneLine;
	struct ZoneLine { typedef Iterator<t::CActualZoneAxisType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessCharacteristicActualType
