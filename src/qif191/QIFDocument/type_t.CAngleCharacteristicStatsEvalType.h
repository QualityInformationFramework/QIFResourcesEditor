#pragma once

#include "type_t.CAngularCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CAngleCharacteristicStatsEvalType : public ::qif191::t::CAngularCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CAngleCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleCharacteristicStatsEvalType(CAngleCharacteristicStatsEvalType const& init);
	void operator=(CAngleCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleCharacteristicStatsEvalType
