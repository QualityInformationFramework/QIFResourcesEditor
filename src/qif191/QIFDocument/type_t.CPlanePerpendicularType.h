#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPlanePerpendicularType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPlanePerpendicularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlanePerpendicularType(CPlanePerpendicularType const& init);
	void operator=(CPlanePerpendicularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlanePerpendicularType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlanePerpendicularType_altova_PerpendicularFeature> PerpendicularFeature;
	struct PerpendicularFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlanePerpendicularType_altova_PointFeature> PointFeature;
	struct PointFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlanePerpendicularType
