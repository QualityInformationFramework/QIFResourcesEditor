#pragma once

#include "type_t.CFormCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricityCharacteristicActualType : public ::qif191::t::CFormCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CCylindricityCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricityCharacteristicActualType(CCylindricityCharacteristicActualType const& init);
	void operator=(CCylindricityCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricityCharacteristicActualType); }
	MemberElement<t::CActualZoneRadiiType, _altova_mi_t_altova_CCylindricityCharacteristicActualType_altova_ZoneRadii> ZoneRadii;
	struct ZoneRadii { typedef Iterator<t::CActualZoneRadiiType> iterator; };
	MemberElement<t::CActualZoneAxisType, _altova_mi_t_altova_CCylindricityCharacteristicActualType_altova_ZoneAxis> ZoneAxis;
	struct ZoneAxis { typedef Iterator<t::CActualZoneAxisType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricityCharacteristicActualType
