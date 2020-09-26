#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedMassCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedMassCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedMassCharacteristicStatsEvalType(CUserDefinedMassCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedMassCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedMassCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolMassType> iterator; };
	MemberElement<t::CStatsMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsMassType> iterator; };
	MemberElement<t::CStatsMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsMassType> iterator; };
	MemberElement<t::CStatsWithTolMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolMassType> iterator; };
	MemberElement<t::CStatsMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsMassType> iterator; };
	MemberElement<t::CStatsMassType, _altova_mi_t_altova_CUserDefinedMassCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsMassType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedMassCharacteristicStatsEvalType
