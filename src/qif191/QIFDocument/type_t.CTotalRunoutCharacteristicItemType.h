#pragma once

#include "type_t.CRunoutCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CTotalRunoutCharacteristicItemType : public ::qif191::t::CRunoutCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CTotalRunoutCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTotalRunoutCharacteristicItemType(CTotalRunoutCharacteristicItemType const& init);
	void operator=(CTotalRunoutCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTotalRunoutCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTotalRunoutCharacteristicItemType
