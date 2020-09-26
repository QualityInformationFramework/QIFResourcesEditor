#pragma once

#include "type_t.CGeometricCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class COrientationCharacteristicDefinitionBaseType : public ::qif191::t::CGeometricCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT COrientationCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationCharacteristicDefinitionBaseType(COrientationCharacteristicDefinitionBaseType const& init);
	void operator=(COrientationCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationCharacteristicDefinitionBaseType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_MaterialCondition> MaterialCondition;
	struct MaterialCondition { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	MemberElement<t::COrientationZoneShapeType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_ZoneShape> ZoneShape;
	struct ZoneShape { typedef Iterator<t::COrientationZoneShapeType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_TangentPlane> TangentPlane;
	struct TangentPlane { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_MaximumToleranceValue> MaximumToleranceValue;
	struct MaximumToleranceValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_ProjectedToleranceZoneValue> ProjectedToleranceZoneValue;
	struct ProjectedToleranceZoneValue { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_EachRadialElement> EachRadialElement;
	struct EachRadialElement { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COrientationCharacteristicDefinitionBaseType_altova_EachElement> EachElement;
	struct EachElement { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationCharacteristicDefinitionBaseType
