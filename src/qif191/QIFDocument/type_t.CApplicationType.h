#pragma once



namespace qif191
{

namespace t
{	

class CApplicationType : public TypeBase
{
public:
	QIF191_EXPORT CApplicationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CApplicationType(CApplicationType const& init);
	void operator=(CApplicationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CApplicationType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CApplicationType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CApplicationType_altova_Organization> Organization;
	struct Organization { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CApplicationType_altova_AddonName> AddonName;
	struct AddonName { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CApplicationType_altova_AddonOrganization> AddonOrganization;
	struct AddonOrganization { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CApplicationType
