#pragma once

#include "type_t.CSubstituteFeatureAlgorithmBaseType.h"


namespace qif191
{

namespace t
{	

class CCurveSubstituteFeatureAlgorithmType : public ::qif191::t::CSubstituteFeatureAlgorithmBaseType
{
public:
	QIF191_EXPORT CCurveSubstituteFeatureAlgorithmType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurveSubstituteFeatureAlgorithmType(CCurveSubstituteFeatureAlgorithmType const& init);
	void operator=(CCurveSubstituteFeatureAlgorithmType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurveSubstituteFeatureAlgorithmType); }
	MemberElement<t::CCurveSubstituteFeatureAlgorithmEnumTypeType, _altova_mi_t_altova_CCurveSubstituteFeatureAlgorithmType_altova_CurveSubstituteFeatureAlgorithmEnum> CurveSubstituteFeatureAlgorithmEnum;
	struct CurveSubstituteFeatureAlgorithmEnum { typedef Iterator<t::CCurveSubstituteFeatureAlgorithmEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCurveSubstituteFeatureAlgorithmType_altova_OtherCurveSubstituteFeatureAlgorithm> OtherCurveSubstituteFeatureAlgorithm;
	struct OtherCurveSubstituteFeatureAlgorithm { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurveSubstituteFeatureAlgorithmType
