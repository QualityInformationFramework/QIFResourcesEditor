#pragma once

#include "type_t.CDimensionalCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCharacteristicActualBaseType : public ::qif191::t::CDimensionalCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CLinearCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCharacteristicActualBaseType(CLinearCharacteristicActualBaseType const& init);
	void operator=(CLinearCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCharacteristicActualBaseType); }
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CLinearCharacteristicActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CLinearCharacteristicActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CLinearCharacteristicActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCharacteristicActualBaseType
