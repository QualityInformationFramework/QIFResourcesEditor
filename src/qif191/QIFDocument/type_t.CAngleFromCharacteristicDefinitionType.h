#pragma once

#include "type_t.CAngularCharacteristicDefinitionBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleFromCharacteristicDefinitionType : public ::qif191::t::CAngularCharacteristicDefinitionBaseType
{
public:
	QIF191_EXPORT CAngleFromCharacteristicDefinitionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleFromCharacteristicDefinitionType(CAngleFromCharacteristicDefinitionType const& init);
	void operator=(CAngleFromCharacteristicDefinitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleFromCharacteristicDefinitionType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleFromCharacteristicDefinitionType
