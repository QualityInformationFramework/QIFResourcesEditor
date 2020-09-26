#pragma once

#include "type_t.CLinearCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CRadiusCharacteristicDefinitionType : public ::qif191::t::CLinearCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CRadiusCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRadiusCharacteristicDefinitionType(CRadiusCharacteristicDefinitionType const& init);
	void operator=(CRadiusCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRadiusCharacteristicDefinitionType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CRadiusCharacteristicDefinitionType_altova_ControlledRadius> ControlledRadius;
	struct ControlledRadius { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRadiusCharacteristicDefinitionType
