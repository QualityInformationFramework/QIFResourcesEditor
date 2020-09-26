#pragma once

#include "type_t.CLocationCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CSymmetryCharacteristicStatsEvalType : public ::qif191::t::CLocationCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CSymmetryCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSymmetryCharacteristicStatsEvalType(CSymmetryCharacteristicStatsEvalType const& init);
	void operator=(CSymmetryCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSymmetryCharacteristicStatsEvalType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CSymmetryCharacteristicStatsEvalType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	MemberElement<t::CCompositeSegmentsSymmetryStatsEvalType, _altova_mi_t_altova_CSymmetryCharacteristicStatsEvalType_altova_CompositeSegmentsStats> CompositeSegmentsStats;
	struct CompositeSegmentsStats { typedef Iterator<t::CCompositeSegmentsSymmetryStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSymmetryCharacteristicStatsEvalType
