#pragma once



namespace qif191
{

namespace t
{	

class CFileSpecType : public TypeBase
{
public:
	QIF191_EXPORT CFileSpecType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFileSpecType(CFileSpecType const& init);
	void operator=(CFileSpecType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFileSpecType); }
	MemberElement<t::CCommonFileSpecEnumTypeType, _altova_mi_t_altova_CFileSpecType_altova_CommonFileSpecEnum> CommonFileSpecEnum;
	struct CommonFileSpecEnum { typedef Iterator<t::CCommonFileSpecEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CFileSpecType_altova_OtherFileSpec> OtherFileSpec;
	struct OtherFileSpec { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFileSpecType
