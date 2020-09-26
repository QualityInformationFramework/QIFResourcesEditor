#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeaturePierceType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeaturePierceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeaturePierceType(CPointFeaturePierceType const& init);
	void operator=(CPointFeaturePierceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeaturePierceType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeaturePierceType_altova_SurfaceFeature> SurfaceFeature;
	struct SurfaceFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeaturePierceType_altova_CurveFeature> CurveFeature;
	struct CurveFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeaturePierceType
