#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsMassType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsMassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsMassType(CSummaryStatisticsMassType const& init);
	void operator=(CSummaryStatisticsMassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsMassType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsMassType_altova_massUnit, 0, 0> massUnit;	// massUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsMassType
