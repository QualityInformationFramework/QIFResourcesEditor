#pragma once

#include "type_t.CTimeCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTimeCharacteristicItemType : public ::qif191::t::CTimeCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedTimeCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTimeCharacteristicItemType(CUserDefinedTimeCharacteristicItemType const& init);
	void operator=(CUserDefinedTimeCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTimeCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTimeCharacteristicItemType
