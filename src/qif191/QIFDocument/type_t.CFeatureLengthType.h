#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureLengthType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CFeatureLengthType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureLengthType(CFeatureLengthType const& init);
	void operator=(CFeatureLengthType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureLengthType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureLengthType
