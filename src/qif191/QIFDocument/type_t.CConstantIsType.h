#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CConstantIsType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CConstantIsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConstantIsType(CConstantIsType const& init);
	void operator=(CConstantIsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConstantIsType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CConstantIsType_altova_val, 1, 2> val;	// val CBooleanConstantEnumType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConstantIsType
