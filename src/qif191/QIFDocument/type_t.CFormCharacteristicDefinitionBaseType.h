#pragma once

#include "type_t.CGeometricCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CFormCharacteristicDefinitionBaseType : public ::qif191::t::CGeometricCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CFormCharacteristicDefinitionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormCharacteristicDefinitionBaseType(CFormCharacteristicDefinitionBaseType const& init);
	void operator=(CFormCharacteristicDefinitionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFormCharacteristicDefinitionBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormCharacteristicDefinitionBaseType
