#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAreaCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedAreaCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAreaCharacteristicStatsEvalType(CUserDefinedAreaCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedAreaCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAreaCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolAreaType> iterator; };
	MemberElement<t::CStatsAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsAreaType> iterator; };
	MemberElement<t::CStatsAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsAreaType> iterator; };
	MemberElement<t::CStatsWithTolAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolAreaType> iterator; };
	MemberElement<t::CStatsAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsAreaType> iterator; };
	MemberElement<t::CStatsAreaType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsAreaType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAreaCharacteristicStatsEvalType
