#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CCircleProjectionType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CCircleProjectionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleProjectionType(CCircleProjectionType const& init);
	void operator=(CCircleProjectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleProjectionType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CCircleProjectionType_altova_ProjectionCircle> ProjectionCircle;
	struct ProjectionCircle { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CCircleProjectionType_altova_ProjectionPlane> ProjectionPlane;
	struct ProjectionPlane { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleProjectionType
