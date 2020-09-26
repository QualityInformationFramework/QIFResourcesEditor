#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenPointDefinedSurfaceRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenPointDefinedSurfaceRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenPointDefinedSurfaceRuleType(CIfThenPointDefinedSurfaceRuleType const& init);
	void operator=(CIfThenPointDefinedSurfaceRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenPointDefinedSurfaceRuleType); }
	MemberElement<t::CPointDefinedSurfacePointSamplingStrategyType, _altova_mi_t_altova_CIfThenPointDefinedSurfaceRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CPointDefinedSurfacePointSamplingStrategyType> iterator; };
	MemberElement<t::CSurfaceSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenPointDefinedSurfaceRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CSurfaceSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenPointDefinedSurfaceRuleType
