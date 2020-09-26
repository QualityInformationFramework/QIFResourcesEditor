#pragma once

#include "type_t.CSubstituteFeatureAlgorithmBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceSubstituteFeatureAlgorithmType : public ::qif191::t::CSubstituteFeatureAlgorithmBaseType
{
public:
	QIF191_EXPORT CSurfaceSubstituteFeatureAlgorithmType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceSubstituteFeatureAlgorithmType(CSurfaceSubstituteFeatureAlgorithmType const& init);
	void operator=(CSurfaceSubstituteFeatureAlgorithmType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceSubstituteFeatureAlgorithmType); }
	MemberElement<t::CSurfaceSubstituteFeatureAlgorithmEnumTypeType, _altova_mi_t_altova_CSurfaceSubstituteFeatureAlgorithmType_altova_SurfaceSubstituteFeatureAlgorithmEnum> SurfaceSubstituteFeatureAlgorithmEnum;
	struct SurfaceSubstituteFeatureAlgorithmEnum { typedef Iterator<t::CSurfaceSubstituteFeatureAlgorithmEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CSurfaceSubstituteFeatureAlgorithmType_altova_OtherSurfaceSubstituteFeatureAlgorithm> OtherSurfaceSubstituteFeatureAlgorithm;
	struct OtherSurfaceSubstituteFeatureAlgorithm { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceSubstituteFeatureAlgorithmType
