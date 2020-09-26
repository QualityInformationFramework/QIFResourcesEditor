#pragma once

#include "type_t.CGeometricCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CProfileCharacteristicDefinitionBaseType : public ::qif191::t::CGeometricCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CProfileCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProfileCharacteristicDefinitionBaseType(CProfileCharacteristicDefinitionBaseType const& init);
	void operator=(CProfileCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProfileCharacteristicDefinitionBaseType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_OuterDisposition> OuterDisposition;
	struct OuterDisposition { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_UnequalZone> UnequalZone;
	struct UnequalZone { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_OffsetZone> OffsetZone;
	struct OffsetZone { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CCompositeSegmentProfileDefinitionType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_SecondCompositeSegmentProfileDefinition> SecondCompositeSegmentProfileDefinition;
	struct SecondCompositeSegmentProfileDefinition { typedef Iterator<t::CCompositeSegmentProfileDefinitionType> iterator; };
	MemberElement<t::CCompositeSegmentProfileDefinitionType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_ThirdCompositeSegmentProfileDefinition> ThirdCompositeSegmentProfileDefinition;
	struct ThirdCompositeSegmentProfileDefinition { typedef Iterator<t::CCompositeSegmentProfileDefinitionType> iterator; };
	MemberElement<t::CCompositeSegmentProfileDefinitionType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_FourthCompositeSegmentProfileDefinition> FourthCompositeSegmentProfileDefinition;
	struct FourthCompositeSegmentProfileDefinition { typedef Iterator<t::CCompositeSegmentProfileDefinitionType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_DatumReferenceFrameId> DatumReferenceFrameId;
	struct DatumReferenceFrameId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CProfileCharacteristicDefinitionBaseType_altova_OrientationOnly> OrientationOnly;
	struct OrientationOnly { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProfileCharacteristicDefinitionBaseType
