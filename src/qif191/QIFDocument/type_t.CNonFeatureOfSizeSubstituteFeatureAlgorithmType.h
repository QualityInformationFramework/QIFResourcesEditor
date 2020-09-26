#pragma once

#include "type_t.CSubstituteFeatureAlgorithmBaseType.h"


namespace qif191
{

namespace t
{	

class CNonFeatureOfSizeSubstituteFeatureAlgorithmType : public ::qif191::t::CSubstituteFeatureAlgorithmBaseType
{
public:
	QIF191_EXPORT CNonFeatureOfSizeSubstituteFeatureAlgorithmType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNonFeatureOfSizeSubstituteFeatureAlgorithmType(CNonFeatureOfSizeSubstituteFeatureAlgorithmType const& init);
	void operator=(CNonFeatureOfSizeSubstituteFeatureAlgorithmType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNonFeatureOfSizeSubstituteFeatureAlgorithmType); }
	MemberElement<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumTypeType, _altova_mi_t_altova_CNonFeatureOfSizeSubstituteFeatureAlgorithmType_altova_NonFeatureOfSizeSubstituteFeatureAlgorithmEnum> NonFeatureOfSizeSubstituteFeatureAlgorithmEnum;
	struct NonFeatureOfSizeSubstituteFeatureAlgorithmEnum { typedef Iterator<t::CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CNonFeatureOfSizeSubstituteFeatureAlgorithmType_altova_OtherNonFeatureOfSizeSubstituteFeatureAlgorithm> OtherNonFeatureOfSizeSubstituteFeatureAlgorithm;
	struct OtherNonFeatureOfSizeSubstituteFeatureAlgorithm { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNonFeatureOfSizeSubstituteFeatureAlgorithmType
