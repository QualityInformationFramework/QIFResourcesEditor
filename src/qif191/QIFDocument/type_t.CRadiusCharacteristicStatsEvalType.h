#pragma once

#include "type_t.CLinearCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CRadiusCharacteristicStatsEvalType : public ::qif191::t::CLinearCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CRadiusCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRadiusCharacteristicStatsEvalType(CRadiusCharacteristicStatsEvalType const& init);
	void operator=(CRadiusCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRadiusCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRadiusCharacteristicStatsEvalType
