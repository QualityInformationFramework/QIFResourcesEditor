#pragma once

#include "type_t.CDimensionalCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCoordinateCharacteristicDefinitionBaseType : public ::qif191::t::CDimensionalCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CCoordinateCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoordinateCharacteristicDefinitionBaseType(CCoordinateCharacteristicDefinitionBaseType const& init);
	void operator=(CCoordinateCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoordinateCharacteristicDefinitionBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoordinateCharacteristicDefinitionBaseType
