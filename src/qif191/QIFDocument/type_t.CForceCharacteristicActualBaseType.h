#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CForceCharacteristicActualBaseType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CForceCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CForceCharacteristicActualBaseType(CForceCharacteristicActualBaseType const& init);
	void operator=(CForceCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CForceCharacteristicActualBaseType); }
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CForceCharacteristicActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualForceValueType> iterator; };
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CForceCharacteristicActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualForceValueType> iterator; };
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CForceCharacteristicActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualForceValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CForceCharacteristicActualBaseType
