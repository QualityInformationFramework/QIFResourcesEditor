#pragma once

#include "type_t.CAngularCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleCharacteristicDefinitionType : public ::qif191::t::CAngularCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CAngleCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleCharacteristicDefinitionType(CAngleCharacteristicDefinitionType const& init);
	void operator=(CAngleCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleCharacteristicDefinitionType
