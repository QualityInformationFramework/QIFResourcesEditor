#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class COppositePlanesTransformType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT COppositePlanesTransformType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesTransformType(COppositePlanesTransformType const& init);
	void operator=(COppositePlanesTransformType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesTransformType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_COppositePlanesTransformType_altova_BaseOppositePlanes> BaseOppositePlanes;
	struct BaseOppositePlanes { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CTransformationReferenceType, _altova_mi_t_altova_COppositePlanesTransformType_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<t::CTransformationReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesTransformType
