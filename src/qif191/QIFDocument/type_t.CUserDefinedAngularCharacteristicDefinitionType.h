#pragma once

#include "type_t.CAngularCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAngularCharacteristicDefinitionType : public ::qif191::t::CAngularCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CUserDefinedAngularCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAngularCharacteristicDefinitionType(CUserDefinedAngularCharacteristicDefinitionType const& init);
	void operator=(CUserDefinedAngularCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAngularCharacteristicDefinitionType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CUserDefinedAngularCharacteristicDefinitionType_altova_WhatToMeasure> WhatToMeasure;
	struct WhatToMeasure { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAngularCharacteristicDefinitionType
