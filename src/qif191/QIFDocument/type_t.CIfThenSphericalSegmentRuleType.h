#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenSphericalSegmentRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenSphericalSegmentRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenSphericalSegmentRuleType(CIfThenSphericalSegmentRuleType const& init);
	void operator=(CIfThenSphericalSegmentRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenSphericalSegmentRuleType); }
	MemberElement<t::CSphericalSegmentPointSamplingStrategyType, _altova_mi_t_altova_CIfThenSphericalSegmentRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CSphericalSegmentPointSamplingStrategyType> iterator; };
	MemberElement<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenSphericalSegmentRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenSphericalSegmentRuleType
