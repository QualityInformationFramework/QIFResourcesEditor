#pragma once

#include "type_t.CSurfaceCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CSphere23CoreType : public ::qif191::t::CSurfaceCoreBaseType
{
public:
	QIF191_EXPORT CSphere23CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphere23CoreType(CSphere23CoreType const& init);
	void operator=(CSphere23CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphere23CoreType); }

	MemberAttribute<bool,_altova_mi_t_altova_CSphere23CoreType_altova_TurnedV, 0, 0> TurnedV;	// TurnedV Cboolean
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CSphere23CoreType_altova_Diameter> Diameter;
	struct Diameter { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<t::CPointSimpleTypeType, _altova_mi_t_altova_CSphere23CoreType_altova_Location> Location;
	struct Location { typedef Iterator<t::CPointSimpleTypeType> iterator; };
	MemberElement<t::COrientedLatitudeLongitudeSweepType, _altova_mi_t_altova_CSphere23CoreType_altova_LatitudeLongitudeSweep> LatitudeLongitudeSweep;
	struct LatitudeLongitudeSweep { typedef Iterator<t::COrientedLatitudeLongitudeSweepType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphere23CoreType
