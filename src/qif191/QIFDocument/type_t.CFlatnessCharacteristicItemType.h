#pragma once

#include "type_t.CFormCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CFlatnessCharacteristicItemType : public ::qif191::t::CFormCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CFlatnessCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFlatnessCharacteristicItemType(CFlatnessCharacteristicItemType const& init);
	void operator=(CFlatnessCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFlatnessCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFlatnessCharacteristicItemType
