#pragma once

#include "type_t.CSubstituteFeatureAlgorithmBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureOfSizeSubstituteFeatureAlgorithmType : public ::qif191::t::CSubstituteFeatureAlgorithmBaseType
{
public:
	QIF191_EXPORT CFeatureOfSizeSubstituteFeatureAlgorithmType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureOfSizeSubstituteFeatureAlgorithmType(CFeatureOfSizeSubstituteFeatureAlgorithmType const& init);
	void operator=(CFeatureOfSizeSubstituteFeatureAlgorithmType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureOfSizeSubstituteFeatureAlgorithmType); }
	MemberElement<t::CFeatureOfSizeSubstituteFeatureAlgorithmEnumTypeType, _altova_mi_t_altova_CFeatureOfSizeSubstituteFeatureAlgorithmType_altova_FeatureOfSizeSubstituteFeatureAlgorithmEnum> FeatureOfSizeSubstituteFeatureAlgorithmEnum;
	struct FeatureOfSizeSubstituteFeatureAlgorithmEnum { typedef Iterator<t::CFeatureOfSizeSubstituteFeatureAlgorithmEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CFeatureOfSizeSubstituteFeatureAlgorithmType_altova_OtherFeatureOfSizeSubstituteFeatureAlgorithm> OtherFeatureOfSizeSubstituteFeatureAlgorithm;
	struct OtherFeatureOfSizeSubstituteFeatureAlgorithm { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureOfSizeSubstituteFeatureAlgorithmType
