#pragma once

#include "type_t.CCharacteristicBaseType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicNominalBaseType : public ::qif191::t::CCharacteristicBaseType
{
public:
	QIF191_EXPORT CCharacteristicNominalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicNominalBaseType(CCharacteristicNominalBaseType const& init);
	void operator=(CCharacteristicNominalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicNominalBaseType); }
	MemberElement<t::CQIFReferenceType, _altova_mi_t_altova_CCharacteristicNominalBaseType_altova_CharacteristicDefinitionId> CharacteristicDefinitionId;
	struct CharacteristicDefinitionId { typedef Iterator<t::CQIFReferenceType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicNominalBaseType_altova_FeatureNominalIds> FeatureNominalIds;
	struct FeatureNominalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicNominalBaseType_altova_EntityInternalIds> EntityInternalIds;
	struct EntityInternalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicNominalBaseType_altova_EntityExternalIds> EntityExternalIds;
	struct EntityExternalIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CKeyCharacteristicType, _altova_mi_t_altova_CCharacteristicNominalBaseType_altova_KeyCharacteristic> KeyCharacteristic;
	struct KeyCharacteristic { typedef Iterator<t::CKeyCharacteristicType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicNominalBaseType
