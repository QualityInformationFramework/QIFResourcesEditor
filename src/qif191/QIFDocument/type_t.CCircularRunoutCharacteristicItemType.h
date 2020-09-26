#pragma once

#include "type_t.CRunoutCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularRunoutCharacteristicItemType : public ::qif191::t::CRunoutCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CCircularRunoutCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularRunoutCharacteristicItemType(CCircularRunoutCharacteristicItemType const& init);
	void operator=(CCircularRunoutCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularRunoutCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularRunoutCharacteristicItemType
