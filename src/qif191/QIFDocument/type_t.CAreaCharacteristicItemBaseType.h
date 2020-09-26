#pragma once

#include "type_t.CCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAreaCharacteristicItemBaseType : public ::qif191::t::CCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAreaCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAreaCharacteristicItemBaseType(CAreaCharacteristicItemBaseType const& init);
	void operator=(CAreaCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAreaCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAreaCharacteristicItemBaseType
