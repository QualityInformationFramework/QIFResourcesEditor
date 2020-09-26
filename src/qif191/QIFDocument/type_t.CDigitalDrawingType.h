#pragma once



namespace qif191
{

namespace t
{	

class CDigitalDrawingType : public TypeBase
{
public:
	QIF191_EXPORT CDigitalDrawingType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDigitalDrawingType(CDigitalDrawingType const& init);
	void operator=(CDigitalDrawingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDigitalDrawingType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CDigitalDrawingType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CstringType, _altova_mi_t_altova_CDigitalDrawingType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CFileType, _altova_mi_t_altova_CDigitalDrawingType_altova_File> File;
	struct File { typedef Iterator<t::CFileType> iterator; };
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CDigitalDrawingType_altova_Application> Application;
	struct Application { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<t::CAuthorType, _altova_mi_t_altova_CDigitalDrawingType_altova_Author> Author;
	struct Author { typedef Iterator<t::CAuthorType> iterator; };
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CDigitalDrawingType_altova_ApplicationSource> ApplicationSource;
	struct ApplicationSource { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CDigitalDrawingType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CEntitiesExternalType, _altova_mi_t_altova_CDigitalDrawingType_altova_Entities> Entities;
	struct Entities { typedef Iterator<t::CEntitiesExternalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDigitalDrawingType
