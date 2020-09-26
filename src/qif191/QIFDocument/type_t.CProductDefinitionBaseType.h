#pragma once



namespace qif191
{

namespace t
{	

class CProductDefinitionBaseType : public TypeBase
{
public:
	QIF191_EXPORT CProductDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProductDefinitionBaseType(CProductDefinitionBaseType const& init);
	void operator=(CProductDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProductDefinitionBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CProductDefinitionBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_QPId> QPId;
	struct QPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_ModelNumber> ModelNumber;
	struct ModelNumber { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_Version> Version;
	struct Version { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_Material> Material;
	struct Material { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CSecurityClassificationType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_SecurityClassification> SecurityClassification;
	struct SecurityClassification { typedef Iterator<t::CSecurityClassificationType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_ExportControlClassification> ExportControlClassification;
	struct ExportControlClassification { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_FeatureNominalIds> FeatureNominalIds;
	struct FeatureNominalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_CharacteristicNominalIds> CharacteristicNominalIds;
	struct CharacteristicNominalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_PartNoteIds> PartNoteIds;
	struct PartNoteIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_DatumDefinitionIds> DatumDefinitionIds;
	struct DatumDefinitionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_DatumTargetDefinitionIds> DatumTargetDefinitionIds;
	struct DatumTargetDefinitionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CProductDefinitionBaseType_altova_DatumReferenceFrameIds> DatumReferenceFrameIds;
	struct DatumReferenceFrameIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProductDefinitionBaseType
