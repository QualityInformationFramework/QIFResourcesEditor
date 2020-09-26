#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CTorusFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CTorusFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusFeatureNominalType(CTorusFeatureNominalType const& init);
	void operator=(CTorusFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CTorusFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CTorusFeatureNominalType_altova_AxisVector> AxisVector;
	struct AxisVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CLatitudeLongitudeSweepType, _altova_mi_t_altova_CTorusFeatureNominalType_altova_LatitudeLongitudeSweep> LatitudeLongitudeSweep;
	struct LatitudeLongitudeSweep { typedef Iterator<t::CLatitudeLongitudeSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusFeatureNominalType
