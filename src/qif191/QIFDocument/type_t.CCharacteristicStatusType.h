#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicStatusType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicStatusType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicStatusType(CCharacteristicStatusType const& init);
	void operator=(CCharacteristicStatusType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicStatusType); }
	MemberElement<t::CCharacteristicStatusEnumTypeType, _altova_mi_t_altova_CCharacteristicStatusType_altova_CharacteristicStatusEnum> CharacteristicStatusEnum;
	struct CharacteristicStatusEnum { typedef Iterator<t::CCharacteristicStatusEnumTypeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CCharacteristicStatusType_altova_OtherCharacteristicStatus> OtherCharacteristicStatus;
	struct OtherCharacteristicStatus { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicStatusType
