#pragma once

#include "type_t.CProfileCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CLineProfileCharacteristicItemType : public ::qif191::t::CProfileCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CLineProfileCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineProfileCharacteristicItemType(CLineProfileCharacteristicItemType const& init);
	void operator=(CLineProfileCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineProfileCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineProfileCharacteristicItemType
