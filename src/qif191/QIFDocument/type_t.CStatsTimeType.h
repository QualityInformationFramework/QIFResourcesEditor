#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsTimeType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsTimeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsTimeType(CStatsTimeType const& init);
	void operator=(CStatsTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsTimeType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsTimeType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsTimeType
