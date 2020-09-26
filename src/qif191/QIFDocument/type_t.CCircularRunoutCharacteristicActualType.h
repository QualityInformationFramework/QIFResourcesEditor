#pragma once

#include "type_t.CRunoutCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularRunoutCharacteristicActualType : public ::qif191::t::CRunoutCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CCircularRunoutCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularRunoutCharacteristicActualType(CCircularRunoutCharacteristicActualType const& init);
	void operator=(CCircularRunoutCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularRunoutCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularRunoutCharacteristicActualType
