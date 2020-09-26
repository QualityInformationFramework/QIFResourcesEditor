#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CEdgePointFromScanType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CEdgePointFromScanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointFromScanType(CEdgePointFromScanType const& init);
	void operator=(CEdgePointFromScanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointFromScanType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CEdgePointFromScanType_altova_SurfaceFeature> SurfaceFeature;
	struct SurfaceFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CEdgePointFromScanType_altova_SearchRadius> SearchRadius;
	struct SearchRadius { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CEdgePointFromScanType_altova_PatchRadius> PatchRadius;
	struct PatchRadius { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CEdgePointFromScanType_altova_Distance> Distance;
	struct Distance { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CEdgePointFromScanType_altova_Depth> Depth;
	struct Depth { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CRetrievalMethodEnumTypeType, _altova_mi_t_altova_CEdgePointFromScanType_altova_RetrievalMethod> RetrievalMethod;
	struct RetrievalMethod { typedef Iterator<t::CRetrievalMethodEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointFromScanType
