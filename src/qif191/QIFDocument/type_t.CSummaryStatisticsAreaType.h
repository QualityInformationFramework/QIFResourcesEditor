#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsAreaType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsAreaType(CSummaryStatisticsAreaType const& init);
	void operator=(CSummaryStatisticsAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsAreaType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsAreaType_altova_areaUnit, 0, 0> areaUnit;	// areaUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsAreaType
