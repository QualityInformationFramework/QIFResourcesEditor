#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionTransformType(CSurfaceOfRevolutionTransformType const& init);
	void operator=(CSurfaceOfRevolutionTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceOfRevolutionTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CSurfaceOfRevolutionTransformType_altova_BaseSurfaceOfRevolution> BaseSurfaceOfRevolution;
	struct BaseSurfaceOfRevolution { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_CSurfaceOfRevolutionTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionTransformType
