#pragma once

#include "type_t.CAttributeBaseType.h"


namespace qif191
{

namespace t
{	

class CAttributeQPIdType : public ::qif191::t::CAttributeBaseType
{
public:
	QIF191_EXPORT CAttributeQPIdType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttributeQPIdType(CAttributeQPIdType const& init);
	void operator=(CAttributeQPIdType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAttributeQPIdType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CAttributeQPIdType_altova_Value2, 0, 0> Value2;	// Value CQPIdType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttributeQPIdType
