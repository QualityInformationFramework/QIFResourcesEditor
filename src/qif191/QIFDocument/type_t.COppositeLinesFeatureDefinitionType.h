#pragma once

#include "type_t.CFeatureDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class COppositeLinesFeatureDefinitionType : public ::qif191::t::CFeatureDefinitionBaseType
{
public:
	QIF191_EXPORT COppositeLinesFeatureDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesFeatureDefinitionType(COppositeLinesFeatureDefinitionType const& init);
	void operator=(COppositeLinesFeatureDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesFeatureDefinitionType); }
	MemberElement<t::CInternalExternalEnumTypeType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_InternalExternal> InternalExternal;
	struct InternalExternal { typedef Iterator<t::CInternalExternalEnumTypeType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_Width> Width;
	struct Width { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_Length> Length;
	struct Length { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CSlotEndType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_EndType> EndType;
	struct EndType { typedef Iterator<t::CSlotEndType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_TaperAngle> TaperAngle;
	struct TaperAngle { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_SingleOpenEnd> SingleOpenEnd;
	struct SingleOpenEnd { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CEndRadiusType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_EndRadius1> EndRadius1;
	struct EndRadius1 { typedef Iterator<t::CEndRadiusType> iterator; };
	MemberElement<t::CEndRadiusType, _altova_mi_t_altova_COppositeLinesFeatureDefinitionType_altova_EndRadius2> EndRadius2;
	struct EndRadius2 { typedef Iterator<t::CEndRadiusType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesFeatureDefinitionType
