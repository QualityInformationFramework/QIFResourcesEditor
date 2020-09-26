#pragma once



namespace qif191
{

namespace t
{	

class CPhysicalModelType : public TypeBase
{
public:
	QIF191_EXPORT CPhysicalModelType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPhysicalModelType(CPhysicalModelType const& init);
	void operator=(CPhysicalModelType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPhysicalModelType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CPhysicalModelType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPhysicalModelType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPhysicalModelType_altova_Version> Version;
	struct Version { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPhysicalModelType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CAuthorType, _altova_mi_t_altova_CPhysicalModelType_altova_Author> Author;
	struct Author { typedef Iterator<t::CAuthorType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPhysicalModelType_altova_Location> Location;
	struct Location { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CPhysicalModelType_altova_ModelNumber> ModelNumber;
	struct ModelNumber { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPhysicalModelType
