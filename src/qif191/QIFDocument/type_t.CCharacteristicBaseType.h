#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicBaseType(CCharacteristicBaseType const& init);
	void operator=(CCharacteristicBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCharacteristicBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CCharacteristicBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCharacteristicBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicBaseType
