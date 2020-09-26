#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTimeCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedTimeCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTimeCharacteristicStatsEvalType(CUserDefinedTimeCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedTimeCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTimeCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolTimeType> iterator; };
	MemberElement<t::CStatsTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsTimeType> iterator; };
	MemberElement<t::CStatsTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsTimeType> iterator; };
	MemberElement<t::CStatsWithTolTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolTimeType> iterator; };
	MemberElement<t::CStatsTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsTimeType> iterator; };
	MemberElement<t::CStatsTimeType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsTimeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTimeCharacteristicStatsEvalType
