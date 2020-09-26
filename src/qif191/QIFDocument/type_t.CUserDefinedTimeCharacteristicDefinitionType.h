#pragma once

#include "type_t.CTimeCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTimeCharacteristicDefinitionType : public ::qif191::t::CTimeCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedTimeCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTimeCharacteristicDefinitionType(CUserDefinedTimeCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedTimeCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTimeCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedTimeCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTimeCharacteristicDefinitionType
