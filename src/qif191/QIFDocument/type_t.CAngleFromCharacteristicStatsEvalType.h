#pragma once

#include "type_t.CAngularCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CAngleFromCharacteristicStatsEvalType : public ::qif191::t::CAngularCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CAngleFromCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleFromCharacteristicStatsEvalType(CAngleFromCharacteristicStatsEvalType const& init);
	void operator=(CAngleFromCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleFromCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleFromCharacteristicStatsEvalType
