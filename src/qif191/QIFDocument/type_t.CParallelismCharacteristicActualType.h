#pragma once

#include "type_t.COrientationCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CParallelismCharacteristicActualType : public ::qif191::t::COrientationCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CParallelismCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CParallelismCharacteristicActualType(CParallelismCharacteristicActualType const& init);
	void operator=(CParallelismCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CParallelismCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CParallelismCharacteristicActualType
