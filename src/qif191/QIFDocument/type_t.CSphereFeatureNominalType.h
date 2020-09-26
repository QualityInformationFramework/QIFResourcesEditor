#pragma once

#include "type_t.CFeatureNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CSphereFeatureNominalType : public ::qif191::t::CFeatureNominalBaseType
{
public:
	QIF191_EXPORT CSphereFeatureNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphereFeatureNominalType(CSphereFeatureNominalType const& init);
	void operator=(CSphereFeatureNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphereFeatureNominalType); }
	MemberElement<t::CPointType, _altova_mi_t_altova_CSphereFeatureNominalType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::COrientedLatitudeLongitudeSweepType, _altova_mi_t_altova_CSphereFeatureNominalType_altova_LatitudeLongitudeSweep> LatitudeLongitudeSweep;
	struct LatitudeLongitudeSweep { typedef Iterator<t::COrientedLatitudeLongitudeSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphereFeatureNominalType
