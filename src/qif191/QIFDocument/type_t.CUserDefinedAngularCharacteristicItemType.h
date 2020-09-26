#pragma once

#include "type_t.CAngularCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedAngularCharacteristicItemType : public ::qif191::t::CAngularCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CUserDefinedAngularCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedAngularCharacteristicItemType(CUserDefinedAngularCharacteristicItemType const& init);
	void operator=(CUserDefinedAngularCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedAngularCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedAngularCharacteristicItemType
