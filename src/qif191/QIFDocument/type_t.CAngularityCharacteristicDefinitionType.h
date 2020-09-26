#pragma once

#include "type_t.COrientationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularityCharacteristicDefinitionType : public ::qif191::t::COrientationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CAngularityCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularityCharacteristicDefinitionType(CAngularityCharacteristicDefinitionType const& init);
	void operator=(CAngularityCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularityCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularityCharacteristicDefinitionType
