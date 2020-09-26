#pragma once



namespace qif191
{

namespace t
{	

class CFileInternalType : public TypeBase
{
public:
	QIF191_EXPORT CFileInternalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFileInternalType(CFileInternalType const& init);
	void operator=(CFileInternalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFileInternalType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CFileInternalType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CVersionType, _altova_mi_t_altova_CFileInternalType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFileInternalType
