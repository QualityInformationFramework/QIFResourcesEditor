#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolTimeType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolTimeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolTimeType(CStatsWithTolTimeType const& init);
	void operator=(CStatsWithTolTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolTimeType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolTimeType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolTimeType
