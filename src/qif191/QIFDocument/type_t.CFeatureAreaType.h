#pragma once

#include "type_t.CArithmeticExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureAreaType : public ::qif191::t::CArithmeticExpressionBaseType
{
public:
	QIF191_EXPORT CFeatureAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureAreaType(CFeatureAreaType const& init);
	void operator=(CFeatureAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureAreaType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureAreaType
