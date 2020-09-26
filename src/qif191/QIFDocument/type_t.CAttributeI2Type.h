#pragma once

#include "type_t.CAttributeBaseType.h"


namespace qif191
{

namespace t
{	

class CAttributeI2Type : public ::qif191::t::CAttributeBaseType
{
public:
	QIF191_EXPORT CAttributeI2Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeI2Type(CAttributeI2Type const& init);
	void operator=(CAttributeI2Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeI2Type); }

	MemberAttribute<string_type,_altova_mi_t_altova_CAttributeI2Type_altova_Value2, 0, 0> Value2;	// Value CI2Type
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeI2Type
