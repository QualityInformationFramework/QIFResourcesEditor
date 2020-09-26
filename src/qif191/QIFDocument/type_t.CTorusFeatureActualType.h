#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CTorusFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CTorusFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusFeatureActualType(CTorusFeatureActualType const& init);
	void operator=(CTorusFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CTorusFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CTorusFeatureActualType_altova_AxisVector> AxisVector;
	struct AxisVector { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CTorusFeatureActualType_altova_MinorDiameter> MinorDiameter;
	struct MinorDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CTorusFeatureActualType_altova_MajorDiameter> MajorDiameter;
	struct MajorDiameter { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CLatitudeLongitudeSweepType, _altova_mi_t_altova_CTorusFeatureActualType_altova_LatitudeLongitudeSweep> LatitudeLongitudeSweep;
	struct LatitudeLongitudeSweep { typedef Iterator<t::CLatitudeLongitudeSweepType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CTorusFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusFeatureActualType
