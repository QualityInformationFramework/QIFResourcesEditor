#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsTimeType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsTimeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsTimeType(CSummaryStatisticsTimeType const& init);
	void operator=(CSummaryStatisticsTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsTimeType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsTimeType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsTimeType
