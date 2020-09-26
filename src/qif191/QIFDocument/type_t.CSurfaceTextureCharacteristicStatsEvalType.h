#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceTextureCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CSurfaceTextureCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceTextureCharacteristicStatsEvalType(CSurfaceTextureCharacteristicStatsEvalType const& init);
	void operator=(CSurfaceTextureCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceTextureCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolLinearType, _altova_mi_t_altova_CSurfaceTextureCharacteristicStatsEvalType_altova_RoughnessAverageValueStats> RoughnessAverageValueStats;
	struct RoughnessAverageValueStats { typedef Iterator<t::CStatsWithTolLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceTextureCharacteristicStatsEvalType
