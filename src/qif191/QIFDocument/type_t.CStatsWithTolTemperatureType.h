#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolTemperatureType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolTemperatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolTemperatureType(CStatsWithTolTemperatureType const& init);
	void operator=(CStatsWithTolTemperatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolTemperatureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolTemperatureType_altova_temperatureUnit, 0, 0> temperatureUnit;	// temperatureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolTemperatureType
