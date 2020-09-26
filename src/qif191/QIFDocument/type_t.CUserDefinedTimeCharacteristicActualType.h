#pragma once

#include "type_t.CTimeCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTimeCharacteristicActualType : public ::qif191::t::CTimeCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedTimeCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTimeCharacteristicActualType(CUserDefinedTimeCharacteristicActualType const& init);
	void operator=(CUserDefinedTimeCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTimeCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTimeCharacteristicActualType
