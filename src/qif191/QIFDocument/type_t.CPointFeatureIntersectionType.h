#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureIntersectionType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureIntersectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureIntersectionType(CPointFeatureIntersectionType const& init);
	void operator=(CPointFeatureIntersectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureIntersectionType); }
	MemberElement<t::CSequencedBaseFeatureType, _altova_mi_t_altova_CPointFeatureIntersectionType_altova_IntersectionFeature> IntersectionFeature;
	struct IntersectionFeature { typedef Iterator<t::CSequencedBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureIntersectionType
