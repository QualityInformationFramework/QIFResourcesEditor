#pragma once

#include "type_t.CTemperatureCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTemperatureCharacteristicDefinitionType : public ::qif191::t::CTemperatureCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicDefinitionType(CUserDefinedTemperatureCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedTemperatureCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTemperatureCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedTemperatureCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTemperatureCharacteristicDefinitionType
