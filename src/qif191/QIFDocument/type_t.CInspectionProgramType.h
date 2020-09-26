#pragma once



namespace qif191
{

namespace t
{	

class CInspectionProgramType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionProgramType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionProgramType(CInspectionProgramType const& init);
	void operator=(CInspectionProgramType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInspectionProgramType); }
	MemberElement<t::CFileType, _altova_mi_t_altova_CInspectionProgramType_altova_File> File;
	struct File { typedef Iterator<t::CFileType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CInspectionProgramType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CFormalStandardType, _altova_mi_t_altova_CInspectionProgramType_altova_FormalStandard> FormalStandard;
	struct FormalStandard { typedef Iterator<t::CFormalStandardType> iterator; };
	MemberElement<t::CEmployeeType, _altova_mi_t_altova_CInspectionProgramType_altova_Author> Author;
	struct Author { typedef Iterator<t::CEmployeeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionProgramType
