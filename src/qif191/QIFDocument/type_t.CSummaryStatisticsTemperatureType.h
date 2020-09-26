#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsTemperatureType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsTemperatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsTemperatureType(CSummaryStatisticsTemperatureType const& init);
	void operator=(CSummaryStatisticsTemperatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsTemperatureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsTemperatureType_altova_temperatureUnit, 0, 0> temperatureUnit;	// temperatureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsTemperatureType
