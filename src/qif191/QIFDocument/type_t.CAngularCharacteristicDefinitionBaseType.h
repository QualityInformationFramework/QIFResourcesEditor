#pragma once

#include "type_t.CDimensionalCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCharacteristicDefinitionBaseType : public ::qif191::t::CDimensionalCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CAngularCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCharacteristicDefinitionBaseType(CAngularCharacteristicDefinitionBaseType const& init);
	void operator=(CAngularCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCharacteristicDefinitionBaseType); }
	MemberElement<t::CAngularToleranceType, _altova_mi_t_altova_CAngularCharacteristicDefinitionBaseType_altova_Tolerance> Tolerance;
	struct Tolerance { typedef Iterator<t::CAngularToleranceType> iterator; };
	MemberElement<t::CNonToleranceEnumTypeType, _altova_mi_t_altova_CAngularCharacteristicDefinitionBaseType_altova_NonTolerance> NonTolerance;
	struct NonTolerance { typedef Iterator<t::CNonToleranceEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCharacteristicDefinitionBaseType
