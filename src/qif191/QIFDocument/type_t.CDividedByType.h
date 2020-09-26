#pragma once

#include "type_t.CBinaryArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CDividedByType : public ::qif191::t::CBinaryArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CDividedByType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDividedByType(CDividedByType const& init);
	void operator=(CDividedByType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDividedByType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDividedByType
