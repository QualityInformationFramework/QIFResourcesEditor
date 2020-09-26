#pragma once

#include "type_t.CTemperatureCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTemperatureCharacteristicActualType : public ::qif191::t::CTemperatureCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicActualType(CUserDefinedTemperatureCharacteristicActualType const& init);
	void operator=(CUserDefinedTemperatureCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTemperatureCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTemperatureCharacteristicActualType
