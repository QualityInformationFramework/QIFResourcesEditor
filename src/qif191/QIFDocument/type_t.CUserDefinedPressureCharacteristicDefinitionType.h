#pragma once

#include "type_t.CPressureCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedPressureCharacteristicDefinitionType : public ::qif191::t::CPressureCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedPressureCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedPressureCharacteristicDefinitionType(CUserDefinedPressureCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedPressureCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedPressureCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedPressureCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedPressureCharacteristicDefinitionType
