#pragma once

#include "type_t.CAreaCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAreaCharacteristicActualType : public ::qif191::t::CAreaCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedAreaCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAreaCharacteristicActualType(CUserDefinedAreaCharacteristicActualType const& init);
	void operator=(CUserDefinedAreaCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAreaCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAreaCharacteristicActualType
