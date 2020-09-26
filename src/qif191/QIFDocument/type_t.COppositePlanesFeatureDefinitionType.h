#pragma once

#include "type_t.CFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class COppositePlanesFeatureDefinitionType : public ::qif191::t::CFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT COppositePlanesFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesFeatureDefinitionType(COppositePlanesFeatureDefinitionType const& init);
	void operator=(COppositePlanesFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesFeatureDefinitionType); }
	MemberElement<t::CInternalExternalEnumTypeType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_InternalExternal> InternalExternal;
	struct InternalExternal { typedef Iterator<t::CInternalExternalEnumTypeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_Width> Width;
	struct Width { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CSlotEndType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_EndType> EndType;
	struct EndType { typedef Iterator<t::CSlotEndType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_Depth> Depth;
	struct Depth { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CBottomType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_Bottom> Bottom;
	struct Bottom { typedef Iterator<t::CBottomType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_SingleOpenEnd> SingleOpenEnd;
	struct SingleOpenEnd { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CEndRadiusType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_EndRadius1> EndRadius1;
	struct EndRadius1 { typedef Iterator<t::CEndRadiusType> iterator; };
	MemberElement<t::CEndRadiusType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_EndRadius2> EndRadius2;
	struct EndRadius2 { typedef Iterator<t::CEndRadiusType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_TaperAngle> TaperAngle;
	struct TaperAngle { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_COppositePlanesFeatureDefinitionType_altova_DraftAngle> DraftAngle;
	struct DraftAngle { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesFeatureDefinitionType
