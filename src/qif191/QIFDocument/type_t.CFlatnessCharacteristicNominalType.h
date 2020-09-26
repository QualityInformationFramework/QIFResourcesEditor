#pragma once

#include "type_t.CFormCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CFlatnessCharacteristicNominalType : public ::qif191::t::CFormCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CFlatnessCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFlatnessCharacteristicNominalType(CFlatnessCharacteristicNominalType const& init);
	void operator=(CFlatnessCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFlatnessCharacteristicNominalType); }
	MemberElement<t::CCharacteristicCircularZoneLimitType, _altova_mi_t_altova_CFlatnessCharacteristicNominalType_altova_CircularZoneLimit> CircularZoneLimit;
	struct CircularZoneLimit { typedef Iterator<t::CCharacteristicCircularZoneLimitType> iterator; };
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CFlatnessCharacteristicNominalType_altova_DirectionalZoneLimit> DirectionalZoneLimit;
	struct DirectionalZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	MemberElement<t::CCharacteristicRectangularZoneLimitType, _altova_mi_t_altova_CFlatnessCharacteristicNominalType_altova_RectangularZoneLimit> RectangularZoneLimit;
	struct RectangularZoneLimit { typedef Iterator<t::CCharacteristicRectangularZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFlatnessCharacteristicNominalType
