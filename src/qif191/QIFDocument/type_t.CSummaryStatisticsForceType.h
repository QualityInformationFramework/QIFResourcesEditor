#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsForceType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsForceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsForceType(CSummaryStatisticsForceType const& init);
	void operator=(CSummaryStatisticsForceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsForceType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsForceType_altova_forceUnit, 0, 0> forceUnit;	// forceUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsForceType
