#pragma once



namespace qif191
{

namespace t
{	

class CDatumType : public TypeBase
{
public:
	QIF191_EXPORT CDatumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumType(CDatumType const& init);
	void operator=(CDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CDatumType_altova_DatumDefinitionId> DatumDefinitionId;
	struct DatumDefinitionId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CMaterialModifierEnumTypeType, _altova_mi_t_altova_CDatumType_altova_MaterialModifier> MaterialModifier;
	struct MaterialModifier { typedef Iterator<t::CMaterialModifierEnumTypeType> iterator; };
	MemberElement<t::CReferencedComponentEnumTypeType, _altova_mi_t_altova_CDatumType_altova_ReferencedComponent> ReferencedComponent;
	struct ReferencedComponent { typedef Iterator<t::CReferencedComponentEnumTypeType> iterator; };
	MemberElement<t::CDatumFeatureSimulatorModifierType, _altova_mi_t_altova_CDatumType_altova_DatumFeatureSimulatorModifier> DatumFeatureSimulatorModifier;
	struct DatumFeatureSimulatorModifier { typedef Iterator<t::CDatumFeatureSimulatorModifierType> iterator; };
	MemberElement<t::CDatumTranslationType, _altova_mi_t_altova_CDatumType_altova_DatumTranslation> DatumTranslation;
	struct DatumTranslation { typedef Iterator<t::CDatumTranslationType> iterator; };
	MemberElement<t::CDegreesOfFreedomType, _altova_mi_t_altova_CDatumType_altova_DegreesOfFreedom> DegreesOfFreedom;
	struct DegreesOfFreedom { typedef Iterator<t::CDegreesOfFreedomType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CDatumType_altova_ProjectedDatum> ProjectedDatum;
	struct ProjectedDatum { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CDiameterModifierEnumTypeType, _altova_mi_t_altova_CDatumType_altova_DiameterModifier> DiameterModifier;
	struct DiameterModifier { typedef Iterator<t::CDiameterModifierEnumTypeType> iterator; };
	MemberElement<t::CSectionModifierEnumTypeType, _altova_mi_t_altova_CDatumType_altova_SectionModifier> SectionModifier;
	struct SectionModifier { typedef Iterator<t::CSectionModifierEnumTypeType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumType_altova_ContactingFeature> ContactingFeature;
	struct ContactingFeature { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumType_altova_DistanceVariable> DistanceVariable;
	struct DistanceVariable { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumType_altova_DatumFixed> DatumFixed;
	struct DatumFixed { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CReducedDatumEnumTypeType, _altova_mi_t_altova_CDatumType_altova_ReducedDatum> ReducedDatum;
	struct ReducedDatum { typedef Iterator<t::CReducedDatumEnumTypeType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumType_altova_ConstrainOrientation> ConstrainOrientation;
	struct ConstrainOrientation { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CDatumType_altova_ConstrainSubsequent> ConstrainSubsequent;
	struct ConstrainSubsequent { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumType
