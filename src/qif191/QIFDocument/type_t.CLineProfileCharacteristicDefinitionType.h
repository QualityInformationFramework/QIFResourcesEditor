#pragma once

#include "type_t.CProfileCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CLineProfileCharacteristicDefinitionType : public ::qif191::t::CProfileCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CLineProfileCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineProfileCharacteristicDefinitionType(CLineProfileCharacteristicDefinitionType const& init);
	void operator=(CLineProfileCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineProfileCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineProfileCharacteristicDefinitionType
