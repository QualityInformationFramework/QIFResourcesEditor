#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CEllipseProjectionType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CEllipseProjectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseProjectionType(CEllipseProjectionType const& init);
	void operator=(CEllipseProjectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseProjectionType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CEllipseProjectionType_altova_ProjectionFeature> ProjectionFeature;
	struct ProjectionFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CEllipseProjectionType_altova_ProjectionPlane> ProjectionPlane;
	struct ProjectionPlane { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseProjectionType
