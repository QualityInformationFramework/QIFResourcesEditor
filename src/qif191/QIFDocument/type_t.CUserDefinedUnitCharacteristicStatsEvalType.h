#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedUnitCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedUnitCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitCharacteristicStatsEvalType(CUserDefinedUnitCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedUnitCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolUserDefinedUnitType> iterator; };
	MemberElement<t::CStatsUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsUserDefinedUnitType> iterator; };
	MemberElement<t::CStatsUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsUserDefinedUnitType> iterator; };
	MemberElement<t::CStatsWithTolUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolUserDefinedUnitType> iterator; };
	MemberElement<t::CStatsUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsUserDefinedUnitType> iterator; };
	MemberElement<t::CStatsUserDefinedUnitType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsUserDefinedUnitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitCharacteristicStatsEvalType
