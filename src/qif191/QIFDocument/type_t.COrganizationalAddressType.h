#pragma once



namespace qif191
{

namespace t
{	

class COrganizationalAddressType : public TypeBase
{
public:
	QIF191_EXPORT COrganizationalAddressType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrganizationalAddressType(COrganizationalAddressType const& init);
	void operator=(COrganizationalAddressType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrganizationalAddressType); }
	MemberElement<t::CAddressDescriptionType, _altova_mi_t_altova_COrganizationalAddressType_altova_Description> Description;
	struct Description { typedef Iterator<t::CAddressDescriptionType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_InternalLocation> InternalLocation;
	struct InternalLocation { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_StreetNumber> StreetNumber;
	struct StreetNumber { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_Street> Street;
	struct Street { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_PostalBox> PostalBox;
	struct PostalBox { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_Town> Town;
	struct Town { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_Region> Region;
	struct Region { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_PostalCode> PostalCode;
	struct PostalCode { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_Country> Country;
	struct Country { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_FacsimileNumber> FacsimileNumber;
	struct FacsimileNumber { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_TelephoneNumber> TelephoneNumber;
	struct TelephoneNumber { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_ElectronicMailAddress> ElectronicMailAddress;
	struct ElectronicMailAddress { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_COrganizationalAddressType_altova_TelexNumber> TelexNumber;
	struct TelexNumber { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrganizationalAddressType
