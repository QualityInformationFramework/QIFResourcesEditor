#pragma once

#include "type_t.CPressureCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedPressureCharacteristicItemType : public ::qif191::t::CPressureCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedPressureCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedPressureCharacteristicItemType(CUserDefinedPressureCharacteristicItemType const& init);
	void operator=(CUserDefinedPressureCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedPressureCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedPressureCharacteristicItemType
