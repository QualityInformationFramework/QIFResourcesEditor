#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAttributeCharacteristicActualType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedAttributeCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAttributeCharacteristicActualType(CUserDefinedAttributeCharacteristicActualType const& init);
	void operator=(CUserDefinedAttributeCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAttributeCharacteristicActualType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedAttributeCharacteristicActualType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAttributeCharacteristicActualType
