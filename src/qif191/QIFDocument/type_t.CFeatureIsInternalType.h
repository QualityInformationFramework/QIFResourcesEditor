#pragma once

#include "type_t.CBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureIsInternalType : public ::qif191::t::CBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CFeatureIsInternalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureIsInternalType(CFeatureIsInternalType const& init);
	void operator=(CFeatureIsInternalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureIsInternalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureIsInternalType
