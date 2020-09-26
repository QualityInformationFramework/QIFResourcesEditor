#pragma once



namespace qif191
{

namespace t
{	

class CAddressDescriptionType : public TypeBase
{
public:
	QIF191_EXPORT CAddressDescriptionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAddressDescriptionType(CAddressDescriptionType const& init);
	void operator=(CAddressDescriptionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAddressDescriptionType); }
	MemberElement<t::CAddressDescriptionEnumTypeType, _altova_mi_t_altova_CAddressDescriptionType_altova_AddressDescriptionEnum> AddressDescriptionEnum;
	struct AddressDescriptionEnum { typedef Iterator<t::CAddressDescriptionEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CAddressDescriptionType_altova_OtherAddressDescription> OtherAddressDescription;
	struct OtherAddressDescription { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAddressDescriptionType
