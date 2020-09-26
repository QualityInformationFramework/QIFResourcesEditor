#pragma once

#include "type_t.CFormCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CStraightnessCharacteristicItemType : public ::qif191::t::CFormCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CStraightnessCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessCharacteristicItemType(CStraightnessCharacteristicItemType const& init);
	void operator=(CStraightnessCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessCharacteristicItemType
