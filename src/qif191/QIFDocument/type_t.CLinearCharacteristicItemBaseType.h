#pragma once

#include "type_t.CDimensionalCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearCharacteristicItemBaseType : public ::qif191::t::CDimensionalCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CLinearCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearCharacteristicItemBaseType(CLinearCharacteristicItemBaseType const& init);
	void operator=(CLinearCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearCharacteristicItemBaseType
