#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CThreadCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CThreadCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadCharacteristicStatsEvalType(CThreadCharacteristicStatsEvalType const& init);
	void operator=(CThreadCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadCharacteristicStatsEvalType); }
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_CThreadCharacteristicStatsEvalType_altova_ThreadStats> ThreadStats;
	struct ThreadStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CThreadCharacteristicStatsEvalType_altova_PitchDiameterStats> PitchDiameterStats;
	struct PitchDiameterStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CThreadCharacteristicStatsEvalType_altova_FunctionalSizeStats> FunctionalSizeStats;
	struct FunctionalSizeStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadCharacteristicStatsEvalType
