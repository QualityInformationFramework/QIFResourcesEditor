#pragma once

#include "type_t.CRunoutCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularRunoutCharacteristicStatsEvalType : public ::qif191::t::CRunoutCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CCircularRunoutCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularRunoutCharacteristicStatsEvalType(CCircularRunoutCharacteristicStatsEvalType const& init);
	void operator=(CCircularRunoutCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularRunoutCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularRunoutCharacteristicStatsEvalType
