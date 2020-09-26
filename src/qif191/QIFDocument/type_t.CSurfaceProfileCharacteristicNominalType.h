#pragma once

#include "type_t.CProfileCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileCharacteristicNominalType : public ::qif191::t::CProfileCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileCharacteristicNominalType(CSurfaceProfileCharacteristicNominalType const& init);
	void operator=(CSurfaceProfileCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileCharacteristicNominalType); }
	MemberElement<t::CCharacteristicCircularZoneLimitType, _altova_mi_t_altova_CSurfaceProfileCharacteristicNominalType_altova_CircularZoneLimit> CircularZoneLimit;
	struct CircularZoneLimit { typedef Iterator<t::CCharacteristicCircularZoneLimitType> iterator; };
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CSurfaceProfileCharacteristicNominalType_altova_DirectionalZoneLimit> DirectionalZoneLimit;
	struct DirectionalZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	MemberElement<t::CCharacteristicRectangularZoneLimitType, _altova_mi_t_altova_CSurfaceProfileCharacteristicNominalType_altova_RectangularZoneLimit> RectangularZoneLimit;
	struct RectangularZoneLimit { typedef Iterator<t::CCharacteristicRectangularZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileCharacteristicNominalType
