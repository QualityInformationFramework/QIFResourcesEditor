#pragma once

#include "type_t.CCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSurfaceTextureCharacteristicItemType : public ::qif191::t::CCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CSurfaceTextureCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceTextureCharacteristicItemType(CSurfaceTextureCharacteristicItemType const& init);
	void operator=(CSurfaceTextureCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceTextureCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceTextureCharacteristicItemType
