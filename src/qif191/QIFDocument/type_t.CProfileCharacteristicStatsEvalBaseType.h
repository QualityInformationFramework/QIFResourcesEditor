#pragma once

#include "type_t.CGeometricCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CProfileCharacteristicStatsEvalBaseType : public ::qif191::t::CGeometricCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CProfileCharacteristicStatsEvalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileCharacteristicStatsEvalBaseType(CProfileCharacteristicStatsEvalBaseType const& init);
	void operator=(CProfileCharacteristicStatsEvalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileCharacteristicStatsEvalBaseType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_WorstPositiveDeviationStats> WorstPositiveDeviationStats;
	struct WorstPositiveDeviationStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_WorstNegativeDeviationStats> WorstNegativeDeviationStats;
	struct WorstNegativeDeviationStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CPointDeviationsStatsEvalType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_PointDeviationsStats> PointDeviationsStats;
	struct PointDeviationsStats { typedef Iterator<t::CPointDeviationsStatsEvalType> iterator; };
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_DatumsOkStats> DatumsOkStats;
	struct DatumsOkStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	MemberElement<t::CCompositeSegmentsProfileStatsEvalType, _altova_mi_t_altova_CProfileCharacteristicStatsEvalBaseType_altova_CompositeSegmentsStats> CompositeSegmentsStats;
	struct CompositeSegmentsStats { typedef Iterator<t::CCompositeSegmentsProfileStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileCharacteristicStatsEvalBaseType
