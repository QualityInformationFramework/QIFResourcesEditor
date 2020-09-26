#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenPointRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenPointRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenPointRuleType(CIfThenPointRuleType const& init);
	void operator=(CIfThenPointRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenPointRuleType); }
	MemberElement<t::CPointPointSamplingStrategyType, _altova_mi_t_altova_CIfThenPointRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CPointPointSamplingStrategyType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenPointRuleType
