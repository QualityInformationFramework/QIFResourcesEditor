#pragma once



namespace qif191
{

namespace t
{	

class CTextThreadSpecificationType : public TypeBase
{
public:
	QIF191_EXPORT CTextThreadSpecificationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTextThreadSpecificationType(CTextThreadSpecificationType const& init);
	void operator=(CTextThreadSpecificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTextThreadSpecificationType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CTextThreadSpecificationType_altova_TextSpecification> TextSpecification;
	struct TextSpecification { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTextThreadSpecificationType
