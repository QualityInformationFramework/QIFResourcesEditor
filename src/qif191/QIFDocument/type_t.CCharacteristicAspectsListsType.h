#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicAspectsListsType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicAspectsListsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicAspectsListsType(CCharacteristicAspectsListsType const& init);
	void operator=(CCharacteristicAspectsListsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicAspectsListsType); }
	MemberElement<t::CFormalStandardType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_FormalStandard> FormalStandard;
	struct FormalStandard { typedef Iterator<t::CFormalStandardType> iterator; };
	MemberElement<t::CCharacteristicDefinitionsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_CharacteristicDefinitions> CharacteristicDefinitions;
	struct CharacteristicDefinitions { typedef Iterator<t::CCharacteristicDefinitionsType> iterator; };
	MemberElement<t::CCharacteristicDefinitionsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_DefaultCharacteristicDefinitions> DefaultCharacteristicDefinitions;
	struct DefaultCharacteristicDefinitions { typedef Iterator<t::CCharacteristicDefinitionsType> iterator; };
	MemberElement<t::CToleranceDefinitionsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_DefaultToleranceDefinitions> DefaultToleranceDefinitions;
	struct DefaultToleranceDefinitions { typedef Iterator<t::CToleranceDefinitionsType> iterator; };
	MemberElement<t::CCharacteristicNominalsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_CharacteristicNominals> CharacteristicNominals;
	struct CharacteristicNominals { typedef Iterator<t::CCharacteristicNominalsType> iterator; };
	MemberElement<t::CCharacteristicItemsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_CharacteristicItems> CharacteristicItems;
	struct CharacteristicItems { typedef Iterator<t::CCharacteristicItemsType> iterator; };
	MemberElement<t::CCharacteristicGroupsType, _altova_mi_t_altova_CCharacteristicAspectsListsType_altova_CharacteristicGroups> CharacteristicGroups;
	struct CharacteristicGroups { typedef Iterator<t::CCharacteristicGroupsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicAspectsListsType
