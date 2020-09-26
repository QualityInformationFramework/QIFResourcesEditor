#pragma once

#include "type_t.CAreaCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAreaCharacteristicDefinitionType : public ::qif191::t::CAreaCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedAreaCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAreaCharacteristicDefinitionType(CUserDefinedAreaCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedAreaCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAreaCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedAreaCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAreaCharacteristicDefinitionType
