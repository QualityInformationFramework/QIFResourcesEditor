#pragma once



namespace qif191
{

namespace t
{	

class CPrecedenceType : public TypeBase
{
public:
	QIF191_EXPORT CPrecedenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPrecedenceType(CPrecedenceType const& init);
	void operator=(CPrecedenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPrecedenceType); }
	MemberElement<t::CPrecedenceEnumTypeType, _altova_mi_t_altova_CPrecedenceType_altova_PrecedenceEnum> PrecedenceEnum;
	struct PrecedenceEnum { typedef Iterator<t::CPrecedenceEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPrecedenceType_altova_OtherPrecedence> OtherPrecedence;
	struct OtherPrecedence { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPrecedenceType
