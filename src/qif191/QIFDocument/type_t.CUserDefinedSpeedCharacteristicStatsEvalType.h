#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedSpeedCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedSpeedCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedSpeedCharacteristicStatsEvalType(CUserDefinedSpeedCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedSpeedCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolSpeedType> iterator; };
	MemberElement<t::CStatsSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsSpeedType> iterator; };
	MemberElement<t::CStatsSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsSpeedType> iterator; };
	MemberElement<t::CStatsWithTolSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolSpeedType> iterator; };
	MemberElement<t::CStatsSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsSpeedType> iterator; };
	MemberElement<t::CStatsSpeedType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsSpeedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedSpeedCharacteristicStatsEvalType
