#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicGroupType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicGroupType(CCharacteristicGroupType const& init);
	void operator=(CCharacteristicGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicGroupType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCharacteristicGroupType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicGroupType_altova_CharacteristicItemIds> CharacteristicItemIds;
	struct CharacteristicItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCharacteristicGroupType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCharacteristicGroupType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CQIFReferenceType, _altova_mi_t_altova_CCharacteristicGroupType_altova_TransformId> TransformId;
	struct TransformId { typedef Iterator<t::CQIFReferenceType> iterator; };
	MemberElement<t::COtherUnitsType, _altova_mi_t_altova_CCharacteristicGroupType_altova_Units> Units;
	struct Units { typedef Iterator<t::COtherUnitsType> iterator; };
	MemberElement<t::CScaleType, _altova_mi_t_altova_CCharacteristicGroupType_altova_Scale> Scale;
	struct Scale { typedef Iterator<t::CScaleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicGroupType
