#pragma once

#include "type_t.CPressureCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedPressureCharacteristicActualType : public ::qif191::t::CPressureCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CUserDefinedPressureCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedPressureCharacteristicActualType(CUserDefinedPressureCharacteristicActualType const& init);
	void operator=(CUserDefinedPressureCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedPressureCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedPressureCharacteristicActualType
