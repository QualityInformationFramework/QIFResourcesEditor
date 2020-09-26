#pragma once

#include "type_t.CForceCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedForceCharacteristicActualType : public ::qif191::t::CForceCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedForceCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedForceCharacteristicActualType(CUserDefinedForceCharacteristicActualType const& init);
	void operator=(CUserDefinedForceCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedForceCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedForceCharacteristicActualType
