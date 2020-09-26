#pragma once



namespace qif191
{

namespace t
{	

class CBottomType : public TypeBase
{
public:
	QIF191_EXPORT CBottomType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBottomType(CBottomType const& init);
	void operator=(CBottomType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBottomType); }
	MemberElement<t::CBottomEnumTypeType, _altova_mi_t_altova_CBottomType_altova_BottomEnum> BottomEnum;
	struct BottomEnum { typedef Iterator<t::CBottomEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CBottomType_altova_OtherBottom> OtherBottom;
	struct OtherBottom { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBottomType
