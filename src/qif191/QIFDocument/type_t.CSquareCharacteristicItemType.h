#pragma once

#include "type_t.CLinearCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSquareCharacteristicItemType : public ::qif191::t::CLinearCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CSquareCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSquareCharacteristicItemType(CSquareCharacteristicItemType const& init);
	void operator=(CSquareCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSquareCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSquareCharacteristicItemType
