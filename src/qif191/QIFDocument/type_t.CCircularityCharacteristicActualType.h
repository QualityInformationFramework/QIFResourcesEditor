#pragma once

#include "type_t.CFormCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularityCharacteristicActualType : public ::qif191::t::CFormCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CCircularityCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularityCharacteristicActualType(CCircularityCharacteristicActualType const& init);
	void operator=(CCircularityCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularityCharacteristicActualType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CCircularityCharacteristicActualType_altova_MaxCircularity> MaxCircularity;
	struct MaxCircularity { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualZoneRadiiType, _altova_mi_t_altova_CCircularityCharacteristicActualType_altova_ZoneRadii> ZoneRadii;
	struct ZoneRadii { typedef Iterator<t::CActualZoneRadiiType> iterator; };
	MemberElement<t::CActualPlaneType, _altova_mi_t_altova_CCircularityCharacteristicActualType_altova_ZonePlane> ZonePlane;
	struct ZonePlane { typedef Iterator<t::CActualPlaneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularityCharacteristicActualType
