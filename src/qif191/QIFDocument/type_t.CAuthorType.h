#pragma once



namespace qif191
{

namespace t
{	

class CAuthorType : public TypeBase
{
public:
	QIF191_EXPORT CAuthorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAuthorType(CAuthorType const& init);
	void operator=(CAuthorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAuthorType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CAuthorType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CAuthorType_altova_Organization> Organization;
	struct Organization { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAuthorType
