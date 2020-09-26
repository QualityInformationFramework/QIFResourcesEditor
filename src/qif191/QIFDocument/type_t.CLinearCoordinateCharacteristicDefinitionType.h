#pragma once

#include "type_t.CCoordinateCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCoordinateCharacteristicDefinitionType : public ::qif191::t::CCoordinateCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CLinearCoordinateCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCoordinateCharacteristicDefinitionType(CLinearCoordinateCharacteristicDefinitionType const& init);
	void operator=(CLinearCoordinateCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCoordinateCharacteristicDefinitionType); }
	MemberElement<t::CLinearToleranceType, _altova_mi_t_altova_CLinearCoordinateCharacteristicDefinitionType_altova_Tolerance> Tolerance;
	struct Tolerance { typedef Iterator<t::CLinearToleranceType> iterator; };
	MemberElement<t::CNonToleranceEnumTypeType, _altova_mi_t_altova_CLinearCoordinateCharacteristicDefinitionType_altova_NonTolerance> NonTolerance;
	struct NonTolerance { typedef Iterator<t::CNonToleranceEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCoordinateCharacteristicDefinitionType
