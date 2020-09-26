#pragma once

#include "type_t.CTemperatureCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTemperatureCharacteristicItemType : public ::qif191::t::CTemperatureCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicItemType(CUserDefinedTemperatureCharacteristicItemType const& init);
	void operator=(CUserDefinedTemperatureCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTemperatureCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTemperatureCharacteristicItemType
