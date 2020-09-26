#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CArithmeticConstantType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CArithmeticConstantType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArithmeticConstantType(CArithmeticConstantType const& init);
	void operator=(CArithmeticConstantType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArithmeticConstantType); }

	MemberAttribute<double,_altova_mi_t_altova_CArithmeticConstantType_altova_val, 0, 0> val;	// val Cdecimal
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArithmeticConstantType
