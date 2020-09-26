#pragma once

#include "type_t.CAttributeBaseType.h"


namespace qif191
{

namespace t
{	

class CAttributeI1Type : public ::qif191::t::CAttributeBaseType
{
public:
	QIF191_EXPORT CAttributeI1Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeI1Type(CAttributeI1Type const& init);
	void operator=(CAttributeI1Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeI1Type); }

	MemberAttribute<__int64,_altova_mi_t_altova_CAttributeI1Type_altova_Value2, 0, 0> Value2;	// Value Cinteger
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeI1Type
