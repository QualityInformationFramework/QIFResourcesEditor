#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CConeTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CConeTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConeTransformType(CConeTransformType const& init);
	void operator=(CConeTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConeTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CConeTransformType_altova_BaseCone> BaseCone;
	struct BaseCone { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_CConeTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConeTransformType
