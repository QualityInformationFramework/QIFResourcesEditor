#pragma once



namespace qif191
{

namespace t
{	

class CDatumTargetDefinitionBaseType : public TypeBase
{
public:
	QIF191_EXPORT CDatumTargetDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumTargetDefinitionBaseType(CDatumTargetDefinitionBaseType const& init);
	void operator=(CDatumTargetDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumTargetDefinitionBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDatumTargetDefinitionBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CDatumTargetDefinitionBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CDatumTargetDefinitionBaseType_altova_DatumTargetLabel> DatumTargetLabel;
	struct DatumTargetLabel { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CDatumTargetDefinitionBaseType_altova_FeatureNominalId> FeatureNominalId;
	struct FeatureNominalId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CMovableDatumTargetDirectionType, _altova_mi_t_altova_CDatumTargetDefinitionBaseType_altova_MovableDatumTarget> MovableDatumTarget;
	struct MovableDatumTarget { typedef Iterator<t::CMovableDatumTargetDirectionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumTargetDefinitionBaseType
