#pragma once

#include "type_t.CDimensionalCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCoordinateCharacteristicItemBaseType : public ::qif191::t::CDimensionalCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CCoordinateCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateCharacteristicItemBaseType(CCoordinateCharacteristicItemBaseType const& init);
	void operator=(CCoordinateCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateCharacteristicItemBaseType
