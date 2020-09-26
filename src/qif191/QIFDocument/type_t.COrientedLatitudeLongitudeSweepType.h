#pragma once

#include "type_t.CLatitudeLongitudeSweepType.h"


namespace qif191
{

namespace t
{	

class COrientedLatitudeLongitudeSweepType : public ::qif191::t::CLatitudeLongitudeSweepType
{
public:
	QIF191_EXPORT COrientedLatitudeLongitudeSweepType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientedLatitudeLongitudeSweepType(COrientedLatitudeLongitudeSweepType const& init);
	void operator=(COrientedLatitudeLongitudeSweepType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientedLatitudeLongitudeSweepType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COrientedLatitudeLongitudeSweepType_altova_DirNorthPole> DirNorthPole;
	struct DirNorthPole { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientedLatitudeLongitudeSweepType
