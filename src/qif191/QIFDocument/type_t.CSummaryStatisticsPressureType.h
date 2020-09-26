#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsPressureType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsPressureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsPressureType(CSummaryStatisticsPressureType const& init);
	void operator=(CSummaryStatisticsPressureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsPressureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsPressureType_altova_pressureUnit, 0, 0> pressureUnit;	// pressureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsPressureType
