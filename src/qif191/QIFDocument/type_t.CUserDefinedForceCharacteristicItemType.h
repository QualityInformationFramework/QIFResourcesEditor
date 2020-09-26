#pragma once

#include "type_t.CForceCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedForceCharacteristicItemType : public ::qif191::t::CForceCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedForceCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedForceCharacteristicItemType(CUserDefinedForceCharacteristicItemType const& init);
	void operator=(CUserDefinedForceCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedForceCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedForceCharacteristicItemType
