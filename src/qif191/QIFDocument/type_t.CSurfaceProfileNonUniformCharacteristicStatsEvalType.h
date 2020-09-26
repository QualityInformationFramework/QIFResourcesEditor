#pragma once

#include "type_t.CProfileCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileNonUniformCharacteristicStatsEvalType : public ::qif191::t::CProfileCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicStatsEvalType(CSurfaceProfileNonUniformCharacteristicStatsEvalType const& init);
	void operator=(CSurfaceProfileNonUniformCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileNonUniformCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileNonUniformCharacteristicStatsEvalType
