#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsLinearType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsLinearType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsLinearType(CStatsLinearType const& init);
	void operator=(CStatsLinearType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsLinearType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsLinearType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsLinearType
