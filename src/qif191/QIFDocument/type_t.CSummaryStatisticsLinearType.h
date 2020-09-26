#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsLinearType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsLinearType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsLinearType(CSummaryStatisticsLinearType const& init);
	void operator=(CSummaryStatisticsLinearType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsLinearType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsLinearType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsLinearType
