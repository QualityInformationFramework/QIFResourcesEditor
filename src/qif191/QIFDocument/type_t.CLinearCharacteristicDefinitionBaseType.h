#pragma once

#include "type_t.CDimensionalCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCharacteristicDefinitionBaseType : public ::qif191::t::CDimensionalCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CLinearCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCharacteristicDefinitionBaseType(CLinearCharacteristicDefinitionBaseType const& init);
	void operator=(CLinearCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCharacteristicDefinitionBaseType); }
	MemberElement<t::CLinearToleranceType, _altova_mi_t_altova_CLinearCharacteristicDefinitionBaseType_altova_Tolerance> Tolerance;
	struct Tolerance { typedef Iterator<t::CLinearToleranceType> iterator; };
	MemberElement<t::CNonToleranceEnumTypeType, _altova_mi_t_altova_CLinearCharacteristicDefinitionBaseType_altova_NonTolerance> NonTolerance;
	struct NonTolerance { typedef Iterator<t::CNonToleranceEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCharacteristicDefinitionBaseType
