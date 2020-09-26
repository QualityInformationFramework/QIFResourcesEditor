#pragma once

#include "type_t.CAxisType.h"


namespace qif191
{

namespace t
{	

class CZoneAxisType : public ::qif191::t::CAxisType
{
public:
	QIF191_EXPORT CZoneAxisType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CZoneAxisType(CZoneAxisType const& init);
	void operator=(CZoneAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CZoneAxisType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CZoneAxisType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CZoneAxisType
