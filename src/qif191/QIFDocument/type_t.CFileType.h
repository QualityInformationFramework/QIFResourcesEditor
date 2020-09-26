#pragma once



namespace qif191
{

namespace t
{	

class CFileType : public TypeBase
{
public:
	QIF191_EXPORT CFileType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFileType(CFileType const& init);
	void operator=(CFileType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFileType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CFileType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CFileType_altova_Version> Version;
	struct Version { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CDigitalModelFormatType, _altova_mi_t_altova_CFileType_altova_Format> Format;
	struct Format { typedef Iterator<t::CDigitalModelFormatType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFileType
