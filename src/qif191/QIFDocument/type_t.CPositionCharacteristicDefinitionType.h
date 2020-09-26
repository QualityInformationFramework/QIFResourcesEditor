#pragma once

#include "type_t.CLocationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CPositionCharacteristicDefinitionType : public ::qif191::t::CLocationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CPositionCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCharacteristicDefinitionType(CPositionCharacteristicDefinitionType const& init);
	void operator=(CPositionCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionCharacteristicDefinitionType); }
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_MaterialCondition> MaterialCondition;
	struct MaterialCondition { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	MemberElement<t::CPositionZoneShapeType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_ZoneShape> ZoneShape;
	struct ZoneShape { typedef Iterator<t::CPositionZoneShapeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_ProjectedToleranceZoneValue> ProjectedToleranceZoneValue;
	struct ProjectedToleranceZoneValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CCompositeSegmentPositionDefinitionType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_SecondCompositeSegmentPositionDefinition> SecondCompositeSegmentPositionDefinition;
	struct SecondCompositeSegmentPositionDefinition { typedef Iterator<t::CCompositeSegmentPositionDefinitionType> iterator; };
	MemberElement<t::CCompositeSegmentPositionDefinitionType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_ThirdCompositeSegmentPositionDefinition> ThirdCompositeSegmentPositionDefinition;
	struct ThirdCompositeSegmentPositionDefinition { typedef Iterator<t::CCompositeSegmentPositionDefinitionType> iterator; };
	MemberElement<t::CCompositeSegmentPositionDefinitionType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_FourthCompositeSegmentPositionDefinition> FourthCompositeSegmentPositionDefinition;
	struct FourthCompositeSegmentPositionDefinition { typedef Iterator<t::CCompositeSegmentPositionDefinitionType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_ToPointToleranceValue> ToPointToleranceValue;
	struct ToPointToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CPositionCharacteristicDefinitionType_altova_OrientationOnly> OrientationOnly;
	struct OrientationOnly { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCharacteristicDefinitionType
