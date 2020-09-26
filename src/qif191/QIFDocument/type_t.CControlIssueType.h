#pragma once



namespace qif191
{

namespace t
{	

class CControlIssueType : public TypeBase
{
public:
	QIF191_EXPORT CControlIssueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CControlIssueType(CControlIssueType const& init);
	void operator=(CControlIssueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CControlIssueType); }
	MemberElement<t::CControlIssueEnumTypeType, _altova_mi_t_altova_CControlIssueType_altova_ControlIssueEnum> ControlIssueEnum;
	struct ControlIssueEnum { typedef Iterator<t::CControlIssueEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CControlIssueType_altova_OtherControlIssue> OtherControlIssue;
	struct OtherControlIssue { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CControlIssueType
