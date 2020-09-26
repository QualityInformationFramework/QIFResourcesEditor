#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedLinearCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedLinearCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedLinearCharacteristicStatsEvalType(CUserDefinedLinearCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedLinearCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedLinearCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsWithTolLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CUserDefinedLinearCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedLinearCharacteristicStatsEvalType
