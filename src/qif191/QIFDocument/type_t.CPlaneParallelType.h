#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPlaneParallelType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPlaneParallelType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlaneParallelType(CPlaneParallelType const& init);
	void operator=(CPlaneParallelType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlaneParallelType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlaneParallelType_altova_ParallelFeature> ParallelFeature;
	struct ParallelFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPlaneParallelType_altova_PointFeature> PointFeature;
	struct PointFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlaneParallelType
