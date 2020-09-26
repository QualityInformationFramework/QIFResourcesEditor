#pragma once



namespace qif191
{

namespace t
{	

class CControlIssueDetailsType : public TypeBase
{
public:
	QIF191_EXPORT CControlIssueDetailsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CControlIssueDetailsType(CControlIssueDetailsType const& init);
	void operator=(CControlIssueDetailsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CControlIssueDetailsType); }
	MemberElement<t::CControlIssueType, _altova_mi_t_altova_CControlIssueDetailsType_altova_ControlIssue> ControlIssue;
	struct ControlIssue { typedef Iterator<t::CControlIssueType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CControlIssueDetailsType_altova_ControlMethodId> ControlMethodId;
	struct ControlMethodId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CControlIssueDetailsType_altova_StudyIssueId> StudyIssueId;
	struct StudyIssueId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CControlIssueDetailsType
