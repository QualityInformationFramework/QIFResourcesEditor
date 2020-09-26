#pragma once

#include "type_t.CLinearCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDepthCharacteristicDefinitionType : public ::qif191::t::CLinearCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CDepthCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDepthCharacteristicDefinitionType(CDepthCharacteristicDefinitionType const& init);
	void operator=(CDepthCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDepthCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDepthCharacteristicDefinitionType
