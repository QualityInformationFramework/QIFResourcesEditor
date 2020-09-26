#pragma once

#include "type_t.CCoordinateCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCoordinateCharacteristicItemType : public ::qif191::t::CCoordinateCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAngularCoordinateCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCoordinateCharacteristicItemType(CAngularCoordinateCharacteristicItemType const& init);
	void operator=(CAngularCoordinateCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCoordinateCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCoordinateCharacteristicItemType
