#pragma once

#include "type_t.CAxisType.h"


namespace qif191
{

namespace t
{	

class CActualZoneAxisType : public ::qif191::t::CAxisType
{
public:
	QIF191_EXPORT CActualZoneAxisType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualZoneAxisType(CActualZoneAxisType const& init);
	void operator=(CActualZoneAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualZoneAxisType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CActualZoneAxisType_altova_Length> Length;
	struct Length { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualZoneAxisType
