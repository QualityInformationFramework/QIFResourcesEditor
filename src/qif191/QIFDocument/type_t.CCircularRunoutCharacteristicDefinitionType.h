#pragma once

#include "type_t.CRunoutCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularRunoutCharacteristicDefinitionType : public ::qif191::t::CRunoutCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CCircularRunoutCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularRunoutCharacteristicDefinitionType(CCircularRunoutCharacteristicDefinitionType const& init);
	void operator=(CCircularRunoutCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularRunoutCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularRunoutCharacteristicDefinitionType
