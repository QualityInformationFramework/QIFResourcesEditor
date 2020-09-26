#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CTorus23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CTorus23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorus23CoreType(CTorus23CoreType const& init);
	void operator=(CTorus23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorus23CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CTorus23CoreType_altova_TurnedV, 0, 0> TurnedV;	// TurnedV Cboolean

	MemberAttribute<double,_altova_mi_t_altova_CTorus23CoreType_altova_OffsetV, 0, 0> OffsetV;	// OffsetV Cdouble

	MemberAttribute<double,_altova_mi_t_altova_CTorus23CoreType_altova_ScaleV, 0, 0> ScaleV;	// ScaleV CDoublePositiveType
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CTorus23CoreType_altova_DiameterMinor> DiameterMinor;
	struct DiameterMinor { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CTorus23CoreType_altova_DiameterMajor> DiameterMajor;
	struct DiameterMajor { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CAxisType, _altova_mi_t_altova_CTorus23CoreType_altova_Axis> Axis;
	struct Axis { typedef Iterator<t::CAxisType> iterator; };
	MemberElement<t::CLatitudeLongitudeSweepType, _altova_mi_t_altova_CTorus23CoreType_altova_LatitudeLongitudeSweep> LatitudeLongitudeSweep;
	struct LatitudeLongitudeSweep { typedef Iterator<t::CLatitudeLongitudeSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorus23CoreType
