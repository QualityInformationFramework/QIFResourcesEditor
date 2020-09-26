#pragma once

#include "type_t.CProfileCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CLineProfileCharacteristicActualType : public ::qif191::t::CProfileCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CLineProfileCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineProfileCharacteristicActualType(CLineProfileCharacteristicActualType const& init);
	void operator=(CLineProfileCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineProfileCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineProfileCharacteristicActualType
