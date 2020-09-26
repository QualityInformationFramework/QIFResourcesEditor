#pragma once

#include "type_t.CFeatureBaseType.h"


namespace qif191
{

namespace t
{	

class CFeatureActualBaseType : public ::qif191::t::CFeatureBaseType
{
public:
	QIF191_EXPORT CFeatureActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureActualBaseType(CFeatureActualBaseType const& init);
	void operator=(CFeatureActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFeatureActualBaseType); }
	MemberElement<t::CPointListActualType, _altova_mi_t_altova_CFeatureActualBaseType_altova_PointList> PointList;
	struct PointList { typedef Iterator<t::CPointListActualType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureActualBaseType_altova_FeatureItemId> FeatureItemId;
	struct FeatureItemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureActualBaseType_altova_ActualComponentId> ActualComponentId;
	struct ActualComponentId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CFeatureActualBaseType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CFeatureActualBaseType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CFeatureActualBaseType_altova_NotedEventIds> NotedEventIds;
	struct NotedEventIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureActualBaseType
