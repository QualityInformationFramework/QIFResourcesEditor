#pragma once



namespace qif191
{

namespace t
{	

class CDatumDefinitionType : public TypeBase
{
public:
	QIF191_EXPORT CDatumDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDatumDefinitionType(CDatumDefinitionType const& init);
	void operator=(CDatumDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDatumDefinitionType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDatumDefinitionType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CDatumDefinitionType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CNMTOKENType, _altova_mi_t_altova_CDatumDefinitionType_altova_DatumLabel> DatumLabel;
	struct DatumLabel { typedef Iterator<xs::CNMTOKENType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CDatumDefinitionType_altova_DatumTargetIds> DatumTargetIds;
	struct DatumTargetIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CDatumDefinitionType_altova_FeatureNominalIds> FeatureNominalIds;
	struct FeatureNominalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDatumDefinitionType
