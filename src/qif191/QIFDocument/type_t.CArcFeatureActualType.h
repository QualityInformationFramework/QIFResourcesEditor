#pragma once

#include "type_t.CFeatureActualBaseType.h"


namespace qif191
{

namespace t
{	

class CArcFeatureActualType : public ::qif191::t::CFeatureActualBaseType
{
public:
	QIF191_EXPORT CArcFeatureActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcFeatureActualType(CArcFeatureActualType const& init);
	void operator=(CArcFeatureActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcFeatureActualType); }
	MemberElement<t::CActualPointType, _altova_mi_t_altova_CArcFeatureActualType_altova_Location> Location;
	struct Location { typedef Iterator<t::CActualPointType> iterator; };
	MemberElement<t::CActualUnitVectorType, _altova_mi_t_altova_CArcFeatureActualType_altova_Normal> Normal;
	struct Normal { typedef Iterator<t::CActualUnitVectorType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CArcFeatureActualType_altova_Radius> Radius;
	struct Radius { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CArcFeatureActualType_altova_RadiusMin> RadiusMin;
	struct RadiusMin { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CArcFeatureActualType_altova_RadiusMax> RadiusMax;
	struct RadiusMax { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CSweepType, _altova_mi_t_altova_CArcFeatureActualType_altova_Sweep> Sweep;
	struct Sweep { typedef Iterator<t::CSweepType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CArcFeatureActualType_altova_Form> Form;
	struct Form { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcFeatureActualType
