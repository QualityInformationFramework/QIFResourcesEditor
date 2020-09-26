#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CTimeCharacteristicActualBaseType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CTimeCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeCharacteristicActualBaseType(CTimeCharacteristicActualBaseType const& init);
	void operator=(CTimeCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeCharacteristicActualBaseType); }
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CTimeCharacteristicActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualTimeValueType> iterator; };
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CTimeCharacteristicActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualTimeValueType> iterator; };
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CTimeCharacteristicActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualTimeValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeCharacteristicActualBaseType
