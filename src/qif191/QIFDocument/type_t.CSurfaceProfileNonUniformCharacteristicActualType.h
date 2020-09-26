#pragma once

#include "type_t.CProfileCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileNonUniformCharacteristicActualType : public ::qif191::t::CProfileCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicActualType(CSurfaceProfileNonUniformCharacteristicActualType const& init);
	void operator=(CSurfaceProfileNonUniformCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileNonUniformCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileNonUniformCharacteristicActualType
