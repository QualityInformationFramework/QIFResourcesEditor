#pragma once



namespace qif191
{

namespace t
{	

class CLocationType : public TypeBase
{
public:
	QIF191_EXPORT CLocationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLocationType(CLocationType const& init);
	void operator=(CLocationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLocationType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CLocationType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CstringType, _altova_mi_t_altova_CLocationType_altova_LocationDescription> LocationDescription;
	struct LocationDescription { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::COrganizationalAddressType, _altova_mi_t_altova_CLocationType_altova_Address> Address;
	struct Address { typedef Iterator<t::COrganizationalAddressType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLocationType
