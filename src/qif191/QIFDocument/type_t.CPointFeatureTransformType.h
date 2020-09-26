#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointFeatureTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointFeatureTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointFeatureTransformType(CPointFeatureTransformType const& init);
	void operator=(CPointFeatureTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointFeatureTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointFeatureTransformType_altova_BasePointFeature> BasePointFeature;
	struct BasePointFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_CPointFeatureTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointFeatureTransformType