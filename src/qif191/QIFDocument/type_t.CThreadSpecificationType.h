#pragma once



namespace qif191
{

namespace t
{	

class CThreadSpecificationType : public TypeBase
{
public:
	QIF191_EXPORT CThreadSpecificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadSpecificationType(CThreadSpecificationType const& init);
	void operator=(CThreadSpecificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CThreadSpecificationType); }
	MemberElement<t::CSingleLeadThreadSpecificationType, _altova_mi_t_altova_CThreadSpecificationType_altova_SingleLeadSpecification> SingleLeadSpecification;
	struct SingleLeadSpecification { typedef Iterator<t::CSingleLeadThreadSpecificationType> iterator; };
	MemberElement<t::CMultiLeadThreadSpecificationType, _altova_mi_t_altova_CThreadSpecificationType_altova_MultiLeadSpecification> MultiLeadSpecification;
	struct MultiLeadSpecification { typedef Iterator<t::CMultiLeadThreadSpecificationType> iterator; };
	MemberElement<t::CTextThreadSpecificationType, _altova_mi_t_altova_CThreadSpecificationType_altova_TextThreadSpecification> TextThreadSpecification;
	struct TextThreadSpecification { typedef Iterator<t::CTextThreadSpecificationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadSpecificationType
