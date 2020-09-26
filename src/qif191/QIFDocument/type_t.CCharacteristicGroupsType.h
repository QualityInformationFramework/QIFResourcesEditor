#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicGroupsType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicGroupsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicGroupsType(CCharacteristicGroupsType const& init);
	void operator=(CCharacteristicGroupsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicGroupsType); }
	MemberElement<t::CCharacteristicGroupType, _altova_mi_t_altova_CCharacteristicGroupsType_altova_CharacteristicGroup> CharacteristicGroup;
	struct CharacteristicGroup { typedef Iterator<t::CCharacteristicGroupType> iterator; };
	MemberElement<t::CCharacteristicManufacturingProcessGroupType, _altova_mi_t_altova_CCharacteristicGroupsType_altova_CharacteristicManufacturingProcessGroup> CharacteristicManufacturingProcessGroup;
	struct CharacteristicManufacturingProcessGroup { typedef Iterator<t::CCharacteristicManufacturingProcessGroupType> iterator; };
	MemberElement<t::CCharacteristicSimultaneityGroupType, _altova_mi_t_altova_CCharacteristicGroupsType_altova_CharacteristicSimultaneityGroup> CharacteristicSimultaneityGroup;
	struct CharacteristicSimultaneityGroup { typedef Iterator<t::CCharacteristicSimultaneityGroupType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicGroupsType
