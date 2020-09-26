#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsAreaType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsAreaType(CStatsAreaType const& init);
	void operator=(CStatsAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsAreaType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsAreaType_altova_areaUnit, 0, 0> areaUnit;	// areaUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsAreaType
