#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedPressureCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedPressureCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedPressureCharacteristicStatsEvalType(CUserDefinedPressureCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedPressureCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedPressureCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolPressureType> iterator; };
	MemberElement<t::CStatsPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsPressureType> iterator; };
	MemberElement<t::CStatsPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsPressureType> iterator; };
	MemberElement<t::CStatsWithTolPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolPressureType> iterator; };
	MemberElement<t::CStatsPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsPressureType> iterator; };
	MemberElement<t::CStatsPressureType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsPressureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedPressureCharacteristicStatsEvalType
