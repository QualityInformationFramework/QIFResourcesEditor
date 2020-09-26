#pragma once

#include "type_t.CIfThenFeatureRuleType.h"


namespace qif191
{

namespace t
{	

class CIfThenSurfaceOfRevolutionRuleType : public ::qif191::t::CIfThenFeatureRuleType
{
public:
	QIF191_EXPORT CIfThenSurfaceOfRevolutionRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CIfThenSurfaceOfRevolutionRuleType(CIfThenSurfaceOfRevolutionRuleType const& init);
	void operator=(CIfThenSurfaceOfRevolutionRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CIfThenSurfaceOfRevolutionRuleType); }
	MemberElement<t::CSurfaceOfRevolutionPointSamplingStrategyType, _altova_mi_t_altova_CIfThenSurfaceOfRevolutionRuleType_altova_ThenPointStrategy> ThenPointStrategy;
	struct ThenPointStrategy { typedef Iterator<t::CSurfaceOfRevolutionPointSamplingStrategyType> iterator; };
	MemberElement<t::CCurveSubstituteFeatureAlgorithmType, _altova_mi_t_altova_CIfThenSurfaceOfRevolutionRuleType_altova_ThenFittingAlgorithm> ThenFittingAlgorithm;
	struct ThenFittingAlgorithm { typedef Iterator<t::CCurveSubstituteFeatureAlgorithmType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CIfThenSurfaceOfRevolutionRuleType
