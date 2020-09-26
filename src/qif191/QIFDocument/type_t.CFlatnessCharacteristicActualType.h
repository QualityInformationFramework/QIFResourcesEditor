#pragma once

#include "type_t.CFormCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CFlatnessCharacteristicActualType : public ::qif191::t::CFormCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CFlatnessCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFlatnessCharacteristicActualType(CFlatnessCharacteristicActualType const& init);
	void operator=(CFlatnessCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFlatnessCharacteristicActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CFlatnessCharacteristicActualType_altova_MaxFlatness> MaxFlatness;
	struct MaxFlatness { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualPlaneType, _altova_mi_t_altova_CFlatnessCharacteristicActualType_altova_ZonePlane> ZonePlane;
	struct ZonePlane { typedef Iterator<t::CActualPlaneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFlatnessCharacteristicActualType
