#pragma once

#include "type_t.CGeometricCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CRunoutCharacteristicActualBaseType : public ::qif191::t::CGeometricCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CRunoutCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRunoutCharacteristicActualBaseType(CRunoutCharacteristicActualBaseType const& init);
	void operator=(CRunoutCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRunoutCharacteristicActualBaseType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CRunoutCharacteristicActualBaseType_altova_DatumsOk> DatumsOk;
	struct DatumsOk { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRunoutCharacteristicActualBaseType
