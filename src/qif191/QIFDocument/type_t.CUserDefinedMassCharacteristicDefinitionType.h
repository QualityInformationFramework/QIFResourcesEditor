#pragma once

#include "type_t.CMassCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedMassCharacteristicDefinitionType : public ::qif191::t::CMassCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedMassCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedMassCharacteristicDefinitionType(CUserDefinedMassCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedMassCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedMassCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedMassCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedMassCharacteristicDefinitionType
