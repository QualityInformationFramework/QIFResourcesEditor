#pragma once

#include "type_t.CCoordinateCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCoordinateCharacteristicActualType : public ::qif191::t::CCoordinateCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CAngularCoordinateCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCoordinateCharacteristicActualType(CAngularCoordinateCharacteristicActualType const& init);
	void operator=(CAngularCoordinateCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCoordinateCharacteristicActualType); }
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CAngularCoordinateCharacteristicActualType_altova_Value2> Value2;
	struct Value2 { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CAngularCoordinateCharacteristicActualType_altova_MaxValue> MaxValue;
	struct MaxValue { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CAngularCoordinateCharacteristicActualType_altova_MinValue> MinValue;
	struct MinValue { typedef Iterator<t::CActualAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCoordinateCharacteristicActualType
