#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenCircleRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenCircleRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenCircleRuleType(CIfThenCircleRuleType const& init);
	void operator=(CIfThenCircleRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenCircleRuleType); }
	MemberElement<t::CCirclePointSamplingStrategyType, _altova_mi_t_altova_CIfThenCircleRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CCirclePointSamplingStrategyType> iterator; };
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenCircleRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenCircleRuleType
