#pragma once

#include "type_t.CProfileCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileCharacteristicActualType : public ::qif191::t::CProfileCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileCharacteristicActualType(CSurfaceProfileCharacteristicActualType const& init);
	void operator=(CSurfaceProfileCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileCharacteristicActualType
