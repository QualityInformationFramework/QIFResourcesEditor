#pragma once

#include "type_t.CFormCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularityCharacteristicStatsEvalType : public ::qif191::t::CFormCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CCircularityCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularityCharacteristicStatsEvalType(CCircularityCharacteristicStatsEvalType const& init);
	void operator=(CCircularityCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularityCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularityCharacteristicStatsEvalType
