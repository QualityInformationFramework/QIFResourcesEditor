#pragma once

#include "type_t.CConstructionMethodBaseType.h"


namespace qif191
{

namespace t
{	

class CPointDefinedCurveFromScanType : public ::qif191::t::CConstructionMethodBaseType
{
public:
	QIF191_EXPORT CPointDefinedCurveFromScanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDefinedCurveFromScanType(CPointDefinedCurveFromScanType const& init);
	void operator=(CPointDefinedCurveFromScanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDefinedCurveFromScanType); }
	MemberElement<t::CBaseFeatureType, _altova_mi_t_altova_CPointDefinedCurveFromScanType_altova_SurfaceFeature> SurfaceFeature;
	struct SurfaceFeature { typedef Iterator<t::CBaseFeatureType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPointDefinedCurveFromScanType_altova_SearchRadius> SearchRadius;
	struct SearchRadius { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDefinedCurveFromScanType
