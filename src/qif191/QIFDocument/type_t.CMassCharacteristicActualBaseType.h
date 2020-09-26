#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CMassCharacteristicActualBaseType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CMassCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMassCharacteristicActualBaseType(CMassCharacteristicActualBaseType const& init);
	void operator=(CMassCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMassCharacteristicActualBaseType); }
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CMassCharacteristicActualBaseType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualMassValueType> iterator; };
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CMassCharacteristicActualBaseType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualMassValueType> iterator; };
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CMassCharacteristicActualBaseType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualMassValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMassCharacteristicActualBaseType
