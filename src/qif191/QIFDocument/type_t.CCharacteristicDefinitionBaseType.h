#pragma once

#include "type_t.CCharacteristicBaseType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicDefinitionBaseType : public ::qif191::t::CCharacteristicBaseType
{
public:
	QIF191_EXPORT CCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicDefinitionBaseType(CCharacteristicDefinitionBaseType const& init);
	void operator=(CCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicDefinitionBaseType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CKeyCharacteristicType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_KeyCharacteristic> KeyCharacteristic;
	struct KeyCharacteristic { typedef Iterator<t::CKeyCharacteristicType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_FreeState> FreeState;
	struct FreeState { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_StatisticalCharacteristic> StatisticalCharacteristic;
	struct StatisticalCharacteristic { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_CommonZone> CommonZone;
	struct CommonZone { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_UnitedFeature> UnitedFeature;
	struct UnitedFeature { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CCharacteristicDefinitionBaseType_altova_SeparateZone> SeparateZone;
	struct SeparateZone { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicDefinitionBaseType
