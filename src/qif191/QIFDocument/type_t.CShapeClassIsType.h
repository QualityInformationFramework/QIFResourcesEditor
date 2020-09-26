#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CShapeClassIsType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CShapeClassIsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShapeClassIsType(CShapeClassIsType const& init);
	void operator=(CShapeClassIsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CShapeClassIsType); }
	MemberAttribute<string_type,_altova_mi_t_altova_CShapeClassIsType_altova_val, 1, 5> val;	// val CShapeClassEnumType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShapeClassIsType
