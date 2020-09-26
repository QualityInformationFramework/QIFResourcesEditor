#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CEllipseTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CEllipseTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseTransformType(CEllipseTransformType const& init);
	void operator=(CEllipseTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CEllipseTransformType_altova_BaseEllipse> BaseEllipse;
	struct BaseEllipse { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_CEllipseTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseTransformType
