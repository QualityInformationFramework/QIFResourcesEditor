#pragma once

#include "type_t.COrientationCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CAngularityCharacteristicStatsEvalType : public ::qif191::t::COrientationCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CAngularityCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularityCharacteristicStatsEvalType(CAngularityCharacteristicStatsEvalType const& init);
	void operator=(CAngularityCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularityCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularityCharacteristicStatsEvalType
