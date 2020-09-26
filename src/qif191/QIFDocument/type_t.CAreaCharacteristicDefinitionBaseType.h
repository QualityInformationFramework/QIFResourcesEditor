#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAreaCharacteristicDefinitionBaseType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CAreaCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAreaCharacteristicDefinitionBaseType(CAreaCharacteristicDefinitionBaseType const& init);
	void operator=(CAreaCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAreaCharacteristicDefinitionBaseType); }
	MemberElement<t::CAreaToleranceType, _altova_mi_t_altova_CAreaCharacteristicDefinitionBaseType_altova_Tolerance> Tolerance;
	struct Tolerance { typedef Iterator<t::CAreaToleranceType> iterator; };
	MemberElement<t::CNonToleranceEnumTypeType, _altova_mi_t_altova_CAreaCharacteristicDefinitionBaseType_altova_NonTolerance> NonTolerance;
	struct NonTolerance { typedef Iterator<t::CNonToleranceEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAreaCharacteristicDefinitionBaseType
