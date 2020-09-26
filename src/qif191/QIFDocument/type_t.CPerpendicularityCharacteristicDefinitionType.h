#pragma once

#include "type_t.COrientationCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CPerpendicularityCharacteristicDefinitionType : public ::qif191::t::COrientationCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CPerpendicularityCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPerpendicularityCharacteristicDefinitionType(CPerpendicularityCharacteristicDefinitionType const& init);
	void operator=(CPerpendicularityCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPerpendicularityCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPerpendicularityCharacteristicDefinitionType
