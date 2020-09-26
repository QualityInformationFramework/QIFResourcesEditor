#pragma once

#include "type_t.CFormCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricityCharacteristicStatsEvalType : public ::qif191::t::CFormCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CCylindricityCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricityCharacteristicStatsEvalType(CCylindricityCharacteristicStatsEvalType const& init);
	void operator=(CCylindricityCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricityCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricityCharacteristicStatsEvalType
