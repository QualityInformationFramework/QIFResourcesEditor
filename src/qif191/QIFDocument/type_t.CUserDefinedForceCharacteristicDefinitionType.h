#pragma once

#include "type_t.CForceCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedForceCharacteristicDefinitionType : public ::qif191::t::CForceCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedForceCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedForceCharacteristicDefinitionType(CUserDefinedForceCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedForceCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedForceCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedForceCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedForceCharacteristicDefinitionType
