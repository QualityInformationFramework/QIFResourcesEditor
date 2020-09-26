#pragma once

#include "type_t.CGeometricCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CRunoutCharacteristicStatsEvalBaseType : public ::qif191::t::CGeometricCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CRunoutCharacteristicStatsEvalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutCharacteristicStatsEvalBaseType(CRunoutCharacteristicStatsEvalBaseType const& init);
	void operator=(CRunoutCharacteristicStatsEvalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutCharacteristicStatsEvalBaseType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CRunoutCharacteristicStatsEvalBaseType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_CRunoutCharacteristicStatsEvalBaseType_altova_DatumsOkStats> DatumsOkStats;
	struct DatumsOkStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutCharacteristicStatsEvalBaseType
