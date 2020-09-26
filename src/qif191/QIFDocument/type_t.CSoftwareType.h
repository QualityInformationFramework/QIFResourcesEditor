#pragma once



namespace qif191
{

namespace t
{	

class CSoftwareType : public TypeBase
{
public:
	QIF191_EXPORT CSoftwareType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSoftwareType(CSoftwareType const& init);
	void operator=(CSoftwareType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSoftwareType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CSoftwareType_altova_VendorName> VendorName;
	struct VendorName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CSoftwareType_altova_ApplicationName> ApplicationName;
	struct ApplicationName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CSoftwareType_altova_Version> Version;
	struct Version { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CSoftwareType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSoftwareType
