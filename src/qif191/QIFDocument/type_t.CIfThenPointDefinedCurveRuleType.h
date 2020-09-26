#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenPointDefinedCurveRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenPointDefinedCurveRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenPointDefinedCurveRuleType(CIfThenPointDefinedCurveRuleType const& init);
	void operator=(CIfThenPointDefinedCurveRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenPointDefinedCurveRuleType); }
	MemberElement<t::CPointDefinedCurvePointSamplingStrategyType, _altova_mi_t_altova_CIfThenPointDefinedCurveRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CPointDefinedCurvePointSamplingStrategyType> iterator; };
	MemberElement<t::CCurveSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenPointDefinedCurveRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CCurveSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenPointDefinedCurveRuleType
