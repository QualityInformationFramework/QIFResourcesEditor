#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureMovePointAxisType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureMovePointAxisType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureMovePointAxisType(CPointFeatureMovePointAxisType const& init);
	void operator=(CPointFeatureMovePointAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureMovePointAxisType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureMovePointAxisType_altova_BaseLocationFeature> BaseLocationFeature;
	struct BaseLocationFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPointFeatureMovePointAxisType_altova_Distance> Distance;
	struct Distance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureMovePointAxisType_altova_BaseAxisFeature> BaseAxisFeature;
	struct BaseAxisFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureMovePointAxisType
