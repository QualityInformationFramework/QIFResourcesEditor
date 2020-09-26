#pragma once

#include "type_t.CProfileCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileCharacteristicStatsEvalType : public ::qif191::t::CProfileCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileCharacteristicStatsEvalType(CSurfaceProfileCharacteristicStatsEvalType const& init);
	void operator=(CSurfaceProfileCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileCharacteristicStatsEvalType
