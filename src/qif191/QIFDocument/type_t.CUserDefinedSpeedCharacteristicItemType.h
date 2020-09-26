#pragma once

#include "type_t.CSpeedCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedSpeedCharacteristicItemType : public ::qif191::t::CSpeedCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedSpeedCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedSpeedCharacteristicItemType(CUserDefinedSpeedCharacteristicItemType const& init);
	void operator=(CUserDefinedSpeedCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedSpeedCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedSpeedCharacteristicItemType
