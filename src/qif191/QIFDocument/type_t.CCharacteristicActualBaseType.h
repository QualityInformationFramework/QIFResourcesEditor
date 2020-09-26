#pragma once

#include "type_t.CCharacteristicBaseType.h"


namespace qif191
{

namespace t
{	

class CCharacteristicActualBaseType : public ::qif191::t::CCharacteristicBaseType
{
public:
	QIF191_EXPORT CCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicActualBaseType(CCharacteristicActualBaseType const& init);
	void operator=(CCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicActualBaseType); }
	MemberElement<t::CCharacteristicStatusType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_Status> Status;
	struct Status { typedef Iterator<t::CCharacteristicStatusType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_CharacteristicItemId> CharacteristicItemId;
	struct CharacteristicItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_FeatureActualIds> FeatureActualIds;
	struct FeatureActualIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_ActualComponentId> ActualComponentId;
	struct ActualComponentId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_NotedEventIds> NotedEventIds;
	struct NotedEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CCharacteristicActualBaseType_altova_NonConformanceDesignator> NonConformanceDesignator;
	struct NonConformanceDesignator { typedef Iterator<xs::CtokenType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicActualBaseType
