#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAngularCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CUserDefinedAngularCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAngularCharacteristicStatsEvalType(CUserDefinedAngularCharacteristicStatsEvalType const& init);
	void operator=(CUserDefinedAngularCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAngularCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolAngularType> iterator; };
	MemberElement<t::CStatsAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsAngularType> iterator; };
	MemberElement<t::CStatsAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsAngularType> iterator; };
	MemberElement<t::CStatsWithTolAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsWithTolAngularType> iterator; };
	MemberElement<t::CStatsAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_MaxDeviationStats> MaxDeviationStats;
	struct MaxDeviationStats { typedef Iterator<t::CStatsAngularType> iterator; };
	MemberElement<t::CStatsAngularType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicStatsEvalType_altova_MinDeviationStats> MinDeviationStats;
	struct MinDeviationStats { typedef Iterator<t::CStatsAngularType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAngularCharacteristicStatsEvalType
