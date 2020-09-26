#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTemperatureCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicStatsEvalType(CUserDefinedTemperatureCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedTemperatureCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolTemperatureType> iterator; };
	MemberElement<t::CStatsTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsTemperatureType> iterator; };
	MemberElement<t::CStatsTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsTemperatureType> iterator; };
	MemberElement<t::CStatsWithTolTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolTemperatureType> iterator; };
	MemberElement<t::CStatsTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsTemperatureType> iterator; };
	MemberElement<t::CStatsTemperatureType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsTemperatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTemperatureCharacteristicStatsEvalType
