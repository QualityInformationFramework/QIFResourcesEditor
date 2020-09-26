#pragma once

#include "type_t.CGeometricCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CLocationCharacteristicActualBaseType : public ::qif191::t::CGeometricCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CLocationCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLocationCharacteristicActualBaseType(CLocationCharacteristicActualBaseType const& init);
	void operator=(CLocationCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLocationCharacteristicActualBaseType); }
	MemberElement<t::CZoneDataType, _altova_mi_t_altova_CLocationCharacteristicActualBaseType_altova_ZoneData> ZoneData;
	struct ZoneData { typedef Iterator<t::CZoneDataType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CLocationCharacteristicActualBaseType_altova_DatumsOk> DatumsOk;
	struct DatumsOk { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLocationCharacteristicActualBaseType
