#pragma once

#include "type_t.CGeometricCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CFormCharacteristicActualBaseType : public ::qif191::t::CGeometricCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CFormCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormCharacteristicActualBaseType(CFormCharacteristicActualBaseType const& init);
	void operator=(CFormCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFormCharacteristicActualBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormCharacteristicActualBaseType
