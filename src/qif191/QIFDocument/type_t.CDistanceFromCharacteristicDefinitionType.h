#pragma once

#include "type_t.CLinearCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CDistanceFromCharacteristicDefinitionType : public ::qif191::t::CLinearCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CDistanceFromCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceFromCharacteristicDefinitionType(CDistanceFromCharacteristicDefinitionType const& init);
	void operator=(CDistanceFromCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceFromCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceFromCharacteristicDefinitionType
