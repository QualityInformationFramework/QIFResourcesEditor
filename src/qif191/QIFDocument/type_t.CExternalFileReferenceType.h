#pragma once



namespace qif191
{

namespace t
{	

class CExternalFileReferenceType : public TypeBase
{
public:
	QIF191_EXPORT CExternalFileReferenceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExternalFileReferenceType(CExternalFileReferenceType const& init);
	void operator=(CExternalFileReferenceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExternalFileReferenceType); }
	MemberElement<xs::CanyURIType, _altova_mi_t_altova_CExternalFileReferenceType_altova_URI> URI;
	struct URI { typedef Iterator<xs::CanyURIType> iterator; };
	MemberElement<t::CFileSpecType, _altova_mi_t_altova_CExternalFileReferenceType_altova_FileSpec> FileSpec;
	struct FileSpec { typedef Iterator<t::CFileSpecType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CExternalFileReferenceType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExternalFileReferenceType
