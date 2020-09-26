#pragma once

#include "type_t.CFormCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CStraightnessCharacteristicStatsEvalType : public ::qif191::t::CFormCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CStraightnessCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessCharacteristicStatsEvalType(CStraightnessCharacteristicStatsEvalType const& init);
	void operator=(CStraightnessCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessCharacteristicStatsEvalType); }
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CStraightnessCharacteristicStatsEvalType_altova_MaxStraightnessStats> MaxStraightnessStats;
	struct MaxStraightnessStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessCharacteristicStatsEvalType
