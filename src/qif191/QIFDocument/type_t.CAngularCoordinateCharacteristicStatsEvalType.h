#pragma once

#include "type_t.CAngularCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CAngularCoordinateCharacteristicStatsEvalType : public ::qif191::t::CAngularCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CAngularCoordinateCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCoordinateCharacteristicStatsEvalType(CAngularCoordinateCharacteristicStatsEvalType const& init);
	void operator=(CAngularCoordinateCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCoordinateCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCoordinateCharacteristicStatsEvalType
