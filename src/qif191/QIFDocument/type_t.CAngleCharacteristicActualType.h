#pragma once

#include "type_t.CAngularCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleCharacteristicActualType : public ::qif191::t::CAngularCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CAngleCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleCharacteristicActualType(CAngleCharacteristicActualType const& init);
	void operator=(CAngleCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleCharacteristicActualType
