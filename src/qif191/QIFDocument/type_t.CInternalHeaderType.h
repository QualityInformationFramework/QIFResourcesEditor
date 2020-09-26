#pragma once



namespace qif191
{

namespace t
{	

class CInternalHeaderType : public TypeBase
{
public:
	QIF191_EXPORT CInternalHeaderType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInternalHeaderType(CInternalHeaderType const& init);
	void operator=(CInternalHeaderType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInternalHeaderType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CInternalHeaderType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CFileInternalType, _altova_mi_t_altova_CInternalHeaderType_altova_File> File;
	struct File { typedef Iterator<t::CFileInternalType> iterator; };
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CInternalHeaderType_altova_Application> Application;
	struct Application { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<t::CAuthorType, _altova_mi_t_altova_CInternalHeaderType_altova_Author> Author;
	struct Author { typedef Iterator<t::CAuthorType> iterator; };
	MemberElement<t::CApplicationType, _altova_mi_t_altova_CInternalHeaderType_altova_ApplicationSource> ApplicationSource;
	struct ApplicationSource { typedef Iterator<t::CApplicationType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CInternalHeaderType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::COtherUnitsType, _altova_mi_t_altova_CInternalHeaderType_altova_Units> Units;
	struct Units { typedef Iterator<t::COtherUnitsType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CInternalHeaderType_altova_ScaleCoefficient> ScaleCoefficient;
	struct ScaleCoefficient { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CInternalHeaderType_altova_ModelTolerance> ModelTolerance;
	struct ModelTolerance { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_t_altova_CInternalHeaderType_altova_MassPropertyTolerance> MassPropertyTolerance;
	struct MassPropertyTolerance { typedef Iterator<xs::CdoubleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInternalHeaderType
