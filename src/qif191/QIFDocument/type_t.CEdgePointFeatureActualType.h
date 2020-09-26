#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CEdgePointFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CEdgePointFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointFeatureActualType(CEdgePointFeatureActualType const& init);
	void operator=(CEdgePointFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CEdgePointFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CEdgePointFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CEdgePointFeatureActualType_altova_AdjacentNormal> AdjacentNormal;
	struct AdjacentNormal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointFeatureActualType
