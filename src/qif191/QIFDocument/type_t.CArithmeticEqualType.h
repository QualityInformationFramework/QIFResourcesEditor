#pragma once

#include "type_t.CArithmeticComparisonBaseType.h"


namespace qif191
{

namespace t
{	

class CArithmeticEqualType : public ::qif191::t::CArithmeticComparisonBaseType
{
public:
	QIF191_EXPORT CArithmeticEqualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArithmeticEqualType(CArithmeticEqualType const& init);
	void operator=(CArithmeticEqualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArithmeticEqualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArithmeticEqualType
