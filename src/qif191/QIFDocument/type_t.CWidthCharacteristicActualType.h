#pragma once

#include "type_t.CLinearCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CWidthCharacteristicActualType : public ::qif191::t::CLinearCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CWidthCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CWidthCharacteristicActualType(CWidthCharacteristicActualType const& init);
	void operator=(CWidthCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CWidthCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CWidthCharacteristicActualType
