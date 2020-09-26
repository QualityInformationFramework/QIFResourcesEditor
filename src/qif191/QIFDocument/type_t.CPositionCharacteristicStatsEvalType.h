#pragma once

#include "type_t.CLocationCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CPositionCharacteristicStatsEvalType : public ::qif191::t::CLocationCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CPositionCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCharacteristicStatsEvalType(CPositionCharacteristicStatsEvalType const& init);
	void operator=(CPositionCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionCharacteristicStatsEvalType); }
	MemberElement<t::CPositionCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CPositionCharacteristicStatsEvalType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::CPositionCapabilityCalculationEnumTypeType> iterator; };
	MemberElement<t::CCompositeSegmentsPositionStatsEvalType, _altova_mi_t_altova_CPositionCharacteristicStatsEvalType_altova_CompositeSegmentsStats> CompositeSegmentsStats;
	struct CompositeSegmentsStats { typedef Iterator<t::CCompositeSegmentsPositionStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCharacteristicStatsEvalType
