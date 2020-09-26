#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneTangentThroughType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPlaneTangentThroughType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneTangentThroughType(CPlaneTangentThroughType const& init);
	void operator=(CPlaneTangentThroughType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneTangentThroughType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlaneTangentThroughType_altova_TangentFeature> TangentFeature;
	struct TangentFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlaneTangentThroughType_altova_PointFeature> PointFeature;
	struct PointFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneTangentThroughType
