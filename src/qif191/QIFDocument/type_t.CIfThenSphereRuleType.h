#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenSphereRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenSphereRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenSphereRuleType(CIfThenSphereRuleType const& init);
	void operator=(CIfThenSphereRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenSphereRuleType); }
	MemberElement<t::CSpherePointSamplingStrategyType, _altova_mi_t_altova_CIfThenSphereRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CSpherePointSamplingStrategyType> iterator; };
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenSphereRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenSphereRuleType
