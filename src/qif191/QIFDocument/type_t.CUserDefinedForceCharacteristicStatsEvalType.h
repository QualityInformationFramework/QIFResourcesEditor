#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedForceCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedForceCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedForceCharacteristicStatsEvalType(CUserDefinedForceCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedForceCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedForceCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolForceType> iterator; };
	MemberElement<t::CStatsForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsForceType> iterator; };
	MemberElement<t::CStatsForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsForceType> iterator; };
	MemberElement<t::CStatsWithTolForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolForceType> iterator; };
	MemberElement<t::CStatsForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsForceType> iterator; };
	MemberElement<t::CStatsForceType, _altova_mi_t_altova_CUserDefinedForceCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsForceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedForceCharacteristicStatsEvalType
