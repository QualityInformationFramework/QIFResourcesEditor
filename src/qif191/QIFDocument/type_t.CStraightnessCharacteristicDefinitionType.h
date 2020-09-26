#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CStraightnessCharacteristicDefinitionType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CStraightnessCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessCharacteristicDefinitionType(CStraightnessCharacteristicDefinitionType const& init);
	void operator=(CStraightnessCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessCharacteristicDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CStraightnessCharacteristicDefinitionType_altova_ToleranceValue> ToleranceValue;
	struct ToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CToleranceZonePerUnitLengthType, _altova_mi_t_altova_CStraightnessCharacteristicDefinitionType_altova_ToleranceZonePerUnitLength> ToleranceZonePerUnitLength;
	struct ToleranceZonePerUnitLength { typedef Iterator<t::CToleranceZonePerUnitLengthType> iterator; };
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_CStraightnessCharacteristicDefinitionType_altova_MaterialCondition> MaterialCondition;
	struct MaterialCondition { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	MemberElement<t::CStraightnessZoneShapeType, _altova_mi_t_altova_CStraightnessCharacteristicDefinitionType_altova_ZoneShape> ZoneShape;
	struct ZoneShape { typedef Iterator<t::CStraightnessZoneShapeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessCharacteristicDefinitionType
