#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedUnitCharacteristicActualType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedUnitCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedUnitCharacteristicActualType(CUserDefinedUnitCharacteristicActualType const& init);
	void operator=(CUserDefinedUnitCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedUnitCharacteristicActualType); }
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicActualType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicActualType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CUserDefinedUnitCharacteristicActualType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedUnitCharacteristicActualType
