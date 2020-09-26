#pragma once

#include "type_t.CCharacteristicBaseType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicItemBaseType : public ::qif191::t::CCharacteristicBaseType
{
public:
	QIF191_EXPORT CCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicItemBaseType(CCharacteristicItemBaseType const& init);
	void operator=(CCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicItemBaseType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_QPId> QPId;
	struct QPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CKeyCharacteristicType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_KeyCharacteristic> KeyCharacteristic;
	struct KeyCharacteristic { typedef Iterator<t::CKeyCharacteristicType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_FeatureItemIds> FeatureItemIds;
	struct FeatureItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_NotableEventIds> NotableEventIds;
	struct NotableEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_CharacteristicNominalId> CharacteristicNominalId;
	struct CharacteristicNominalId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLocationOnDrawingType, _altova_mi_t_altova_CCharacteristicItemBaseType_altova_LocationOnDrawing> LocationOnDrawing;
	struct LocationOnDrawing { typedef Iterator<t::CLocationOnDrawingType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicItemBaseType
