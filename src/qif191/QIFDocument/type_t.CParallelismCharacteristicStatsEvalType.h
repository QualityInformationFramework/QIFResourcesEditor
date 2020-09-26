#pragma once

#include "type_t.COrientationCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CParallelismCharacteristicStatsEvalType : public ::qif191::t::COrientationCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CParallelismCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CParallelismCharacteristicStatsEvalType(CParallelismCharacteristicStatsEvalType const& init);
	void operator=(CParallelismCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CParallelismCharacteristicStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CParallelismCharacteristicStatsEvalType
