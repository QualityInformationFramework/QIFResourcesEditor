#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsTemperatureType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsTemperatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsTemperatureType(CStatsTemperatureType const& init);
	void operator=(CStatsTemperatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsTemperatureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsTemperatureType_altova_temperatureUnit, 0, 0> temperatureUnit;	// temperatureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsTemperatureType
