#pragma once

#include "type_t.CMassCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedMassCharacteristicItemType : public ::qif191::t::CMassCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedMassCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedMassCharacteristicItemType(CUserDefinedMassCharacteristicItemType const& init);
	void operator=(CUserDefinedMassCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedMassCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedMassCharacteristicItemType
