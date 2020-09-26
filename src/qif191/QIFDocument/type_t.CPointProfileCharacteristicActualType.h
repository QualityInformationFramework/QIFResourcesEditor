#pragma once

#include "type_t.CProfileCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CPointProfileCharacteristicActualType : public ::qif191::t::CProfileCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CPointProfileCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointProfileCharacteristicActualType(CPointProfileCharacteristicActualType const& init);
	void operator=(CPointProfileCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointProfileCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointProfileCharacteristicActualType
