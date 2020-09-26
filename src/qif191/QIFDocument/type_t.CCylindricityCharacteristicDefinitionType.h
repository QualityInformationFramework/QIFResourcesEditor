#pragma once

#include "type_t.CFormCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricityCharacteristicDefinitionType : public ::qif191::t::CFormCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CCylindricityCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricityCharacteristicDefinitionType(CCylindricityCharacteristicDefinitionType const& init);
	void operator=(CCylindricityCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricityCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricityCharacteristicDefinitionType
