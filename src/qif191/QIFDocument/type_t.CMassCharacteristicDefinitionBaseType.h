#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CMassCharacteristicDefinitionBaseType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CMassCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMassCharacteristicDefinitionBaseType(CMassCharacteristicDefinitionBaseType const& init);
	void operator=(CMassCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMassCharacteristicDefinitionBaseType); }
	MemberElement<t::CMassToleranceType, _altova_mi_t_altova_CMassCharacteristicDefinitionBaseType_altova_Tolerance> Tolerance;
	struct Tolerance { typedef Iterator<t::CMassToleranceType> iterator; };
	MemberElement<t::CNonToleranceEnumTypeType, _altova_mi_t_altova_CMassCharacteristicDefinitionBaseType_altova_NonTolerance> NonTolerance;
	struct NonTolerance { typedef Iterator<t::CNonToleranceEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMassCharacteristicDefinitionBaseType
