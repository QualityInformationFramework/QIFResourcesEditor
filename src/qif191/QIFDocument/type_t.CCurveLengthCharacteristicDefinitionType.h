#pragma once

#include "type_t.CLinearCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CCurveLengthCharacteristicDefinitionType : public ::qif191::t::CLinearCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CCurveLengthCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurveLengthCharacteristicDefinitionType(CCurveLengthCharacteristicDefinitionType const& init);
	void operator=(CCurveLengthCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurveLengthCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurveLengthCharacteristicDefinitionType
