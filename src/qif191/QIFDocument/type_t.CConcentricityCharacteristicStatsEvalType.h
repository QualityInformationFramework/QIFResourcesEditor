#pragma once

#include "type_t.CLocationCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CConcentricityCharacteristicStatsEvalType : public ::qif191::t::CLocationCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CConcentricityCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityCharacteristicStatsEvalType(CConcentricityCharacteristicStatsEvalType const& init);
	void operator=(CConcentricityCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityCharacteristicStatsEvalType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_CConcentricityCharacteristicStatsEvalType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityCharacteristicStatsEvalType
