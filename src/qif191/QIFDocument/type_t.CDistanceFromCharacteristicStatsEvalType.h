#pragma once

#include "type_t.CLinearCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CDistanceFromCharacteristicStatsEvalType : public ::qif191::t::CLinearCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CDistanceFromCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceFromCharacteristicStatsEvalType(CDistanceFromCharacteristicStatsEvalType const& init);
	void operator=(CDistanceFromCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceFromCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceFromCharacteristicStatsEvalType
