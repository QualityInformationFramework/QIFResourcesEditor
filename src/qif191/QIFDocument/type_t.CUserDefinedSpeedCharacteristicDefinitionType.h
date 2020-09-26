#pragma once

#include "type_t.CSpeedCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedSpeedCharacteristicDefinitionType : public ::qif191::t::CSpeedCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedSpeedCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedSpeedCharacteristicDefinitionType(CUserDefinedSpeedCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedSpeedCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedSpeedCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedSpeedCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedSpeedCharacteristicDefinitionType
