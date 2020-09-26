#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDimensionalCharacteristicDefinitionBaseType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CDimensionalCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDimensionalCharacteristicDefinitionBaseType(CDimensionalCharacteristicDefinitionBaseType const& init);
	void operator=(CDimensionalCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDimensionalCharacteristicDefinitionBaseType); }
	MemberElement<t::CDimensionModifierEnumTypeType, _altova_mi_t_altova_CDimensionalCharacteristicDefinitionBaseType_altova_DimensionType> DimensionType;
	struct DimensionType { typedef Iterator<t::CDimensionModifierEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDimensionalCharacteristicDefinitionBaseType
