#pragma once

#include "type_t.CGeometricCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CFormCharacteristicStatsEvalBaseType : public ::qif191::t::CGeometricCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CFormCharacteristicStatsEvalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormCharacteristicStatsEvalBaseType(CFormCharacteristicStatsEvalBaseType const& init);
	void operator=(CFormCharacteristicStatsEvalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFormCharacteristicStatsEvalBaseType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CFormCharacteristicStatsEvalBaseType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormCharacteristicStatsEvalBaseType
