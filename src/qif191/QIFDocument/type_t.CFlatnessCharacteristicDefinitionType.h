#pragma once

#include "type_t.CCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CFlatnessCharacteristicDefinitionType : public ::qif191::t::CCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CFlatnessCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFlatnessCharacteristicDefinitionType(CFlatnessCharacteristicDefinitionType const& init);
	void operator=(CFlatnessCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFlatnessCharacteristicDefinitionType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CFlatnessCharacteristicDefinitionType_altova_ToleranceValue> ToleranceValue;
	struct ToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CToleranceZonePerUnitAreaType, _altova_mi_t_altova_CFlatnessCharacteristicDefinitionType_altova_ToleranceZonePerUnitArea> ToleranceZonePerUnitArea;
	struct ToleranceZonePerUnitArea { typedef Iterator<t::CToleranceZonePerUnitAreaType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CFlatnessCharacteristicDefinitionType_altova_NotConvex> NotConvex;
	struct NotConvex { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFlatnessCharacteristicDefinitionType
