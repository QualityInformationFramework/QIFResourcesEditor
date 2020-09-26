#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CToroidalSegmentTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CToroidalSegmentTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentTransformType(CToroidalSegmentTransformType const& init);
	void operator=(CToroidalSegmentTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CToroidalSegmentTransformType_altova_BaseToroidalSegment> BaseToroidalSegment;
	struct BaseToroidalSegment { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_CToroidalSegmentTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentTransformType
