#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolLinearType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolLinearType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolLinearType(CStatsWithTolLinearType const& init);
	void operator=(CStatsWithTolLinearType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolLinearType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolLinearType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolLinearType
