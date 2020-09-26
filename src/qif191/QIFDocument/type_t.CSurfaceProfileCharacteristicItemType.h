#pragma once

#include "type_t.CProfileCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceProfileCharacteristicItemType : public ::qif191::t::CProfileCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CSurfaceProfileCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceProfileCharacteristicItemType(CSurfaceProfileCharacteristicItemType const& init);
	void operator=(CSurfaceProfileCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceProfileCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceProfileCharacteristicItemType
