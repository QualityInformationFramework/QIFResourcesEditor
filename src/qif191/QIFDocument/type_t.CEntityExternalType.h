#pragma once



namespace qif191
{

namespace t
{	

class CEntityExternalType : public TypeBase
{
public:
	QIF191_EXPORT CEntityExternalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEntityExternalType(CEntityExternalType const& init);
	void operator=(CEntityExternalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEntityExternalType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CEntityExternalType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEntityExternalType_altova_EntityId> EntityId;
	struct EntityId { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CEntityExternalType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CEntityExternalType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEntityExternalType
