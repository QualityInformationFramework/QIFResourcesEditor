#pragma once



namespace qif191
{

namespace t
{	

class CFormalStandardType : public TypeBase
{
public:
	QIF191_EXPORT CFormalStandardType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormalStandardType(CFormalStandardType const& init);
	void operator=(CFormalStandardType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFormalStandardType); }
	MemberElement<t::CFormalStandardEnumTypeType, _altova_mi_t_altova_CFormalStandardType_altova_FormalStandardEnum> FormalStandardEnum;
	struct FormalStandardEnum { typedef Iterator<t::CFormalStandardEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CFormalStandardType_altova_OtherFormalStandard> OtherFormalStandard;
	struct OtherFormalStandard { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormalStandardType
