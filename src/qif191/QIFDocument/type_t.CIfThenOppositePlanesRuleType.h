#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenOppositePlanesRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenOppositePlanesRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenOppositePlanesRuleType(CIfThenOppositePlanesRuleType const& init);
	void operator=(CIfThenOppositePlanesRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenOppositePlanesRuleType); }
	MemberElement<t::COppositePlanesPointSamplingStrategyType, _altova_mi_t_altova_CIfThenOppositePlanesRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::COppositePlanesPointSamplingStrategyType> iterator; };
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenOppositePlanesRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenOppositePlanesRuleType
