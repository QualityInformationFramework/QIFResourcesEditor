#pragma once



namespace qif191
{

namespace t
{	

class CAssignableCauseType : public TypeBase
{
public:
	QIF191_EXPORT CAssignableCauseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssignableCauseType(CAssignableCauseType const& init);
	void operator=(CAssignableCauseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAssignableCauseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CAssignableCauseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CAssignableCauseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CAssignableCauseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CAssignableCauseEnumTypeType, _altova_mi_t_altova_CAssignableCauseType_altova_AssignableCauseEnum> AssignableCauseEnum;
	struct AssignableCauseEnum { typedef Iterator<t::CAssignableCauseEnumTypeType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CAssignableCauseType_altova_CorrectiveActionIds> CorrectiveActionIds;
	struct CorrectiveActionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssignableCauseType
