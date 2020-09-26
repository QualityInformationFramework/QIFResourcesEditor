#pragma once

#include "type_t.CArithmeticComparisonBaseType.h"


namespace qif191
{

namespace t
{	

class CLessOrEqualType : public ::qif191::t::CArithmeticComparisonBaseType
{
public:
	QIF191_EXPORT CLessOrEqualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLessOrEqualType(CLessOrEqualType const& init);
	void operator=(CLessOrEqualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLessOrEqualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLessOrEqualType
