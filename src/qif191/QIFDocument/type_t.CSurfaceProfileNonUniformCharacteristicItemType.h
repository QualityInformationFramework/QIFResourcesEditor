#pragma once

#include "type_t.CProfileCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileNonUniformCharacteristicItemType : public ::qif191::t::CProfileCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileNonUniformCharacteristicItemType(CSurfaceProfileNonUniformCharacteristicItemType const& init);
	void operator=(CSurfaceProfileNonUniformCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileNonUniformCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileNonUniformCharacteristicItemType
