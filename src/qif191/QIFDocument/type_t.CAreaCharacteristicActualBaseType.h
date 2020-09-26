#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CAreaCharacteristicActualBaseType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CAreaCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAreaCharacteristicActualBaseType(CAreaCharacteristicActualBaseType const& init);
	void operator=(CAreaCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAreaCharacteristicActualBaseType); }
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CAreaCharacteristicActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualAreaValueType> iterator; };
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CAreaCharacteristicActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualAreaValueType> iterator; };
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CAreaCharacteristicActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualAreaValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAreaCharacteristicActualBaseType
