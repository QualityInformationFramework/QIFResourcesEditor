#pragma once



namespace qif191
{

namespace t
{	

class CStudyIssueType : public TypeBase
{
public:
	QIF191_EXPORT CStudyIssueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStudyIssueType(CStudyIssueType const& init);
	void operator=(CStudyIssueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStudyIssueType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CStudyIssueType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CInspectionTraceabilityType, _altova_mi_t_altova_CStudyIssueType_altova_Traceability> Traceability;
	struct Traceability { typedef Iterator<t::CInspectionTraceabilityType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStudyIssueType_altova_AssignableCauseIds> AssignableCauseIds;
	struct AssignableCauseIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStudyIssueType_altova_CorrectiveActionIds> CorrectiveActionIds;
	struct CorrectiveActionIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CStudyIssueType_altova_Resolution> Resolution;
	struct Resolution { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStudyIssueType_altova_CharacteristicIds> CharacteristicIds;
	struct CharacteristicIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStudyIssueType_altova_SubgroupIds> SubgroupIds;
	struct SubgroupIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStudyIssueType
