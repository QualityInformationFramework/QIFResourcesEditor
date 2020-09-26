#pragma once

#include "type_t.CDimensionalCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCoordinateCharacteristicActualBaseType : public ::qif191::t::CDimensionalCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CCoordinateCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateCharacteristicActualBaseType(CCoordinateCharacteristicActualBaseType const& init);
	void operator=(CCoordinateCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateCharacteristicActualBaseType); }
	MemberElement<t::CTypeOfCoordinatesType, _altova_mi_t_altova_CCoordinateCharacteristicActualBaseType_altova_TypeOfCoordinates> TypeOfCoordinates;
	struct TypeOfCoordinates { typedef Iterator<t::CTypeOfCoordinatesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateCharacteristicActualBaseType
