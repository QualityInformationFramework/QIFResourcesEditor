#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenSurfaceRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenSurfaceRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenSurfaceRuleType(CIfThenSurfaceRuleType const& init);
	void operator=(CIfThenSurfaceRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenSurfaceRuleType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenSurfaceRuleType
