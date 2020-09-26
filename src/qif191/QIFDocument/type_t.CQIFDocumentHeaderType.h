#pragma once



namespace qif191
{

namespace t
{	

class CQIFDocumentHeaderType : public TypeBase
{
public:
	QIF191_EXPORT CQIFDocumentHeaderType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CQIFDocumentHeaderType(CQIFDocumentHeaderType const& init);
	void operator=(CQIFDocumentHeaderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CQIFDocumentHeaderType); }
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CQIFDocumentHeaderType_altova_Application> Application;
	struct Application { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<t::CAuthorType, _altova_mi_t_altova_CQIFDocumentHeaderType_altova_Author> Author;
	struct Author { typedef Iterator<t::CAuthorType> iterator; };
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CQIFDocumentHeaderType_altova_ApplicationSource> ApplicationSource;
	struct ApplicationSource { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CQIFDocumentHeaderType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CQIFDocumentHeaderType_altova_Scope> Scope;
	struct Scope { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CQIFDocumentHeaderType
