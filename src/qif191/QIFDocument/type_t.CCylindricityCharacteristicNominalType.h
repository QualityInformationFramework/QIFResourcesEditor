#pragma once

#include "type_t.CFormCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricityCharacteristicNominalType : public ::qif191::t::CFormCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CCylindricityCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricityCharacteristicNominalType(CCylindricityCharacteristicNominalType const& init);
	void operator=(CCylindricityCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricityCharacteristicNominalType); }
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CCylindricityCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricityCharacteristicNominalType
