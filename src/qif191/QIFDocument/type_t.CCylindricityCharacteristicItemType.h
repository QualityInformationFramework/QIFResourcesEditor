#pragma once

#include "type_t.CFormCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCylindricityCharacteristicItemType : public ::qif191::t::CFormCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CCylindricityCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricityCharacteristicItemType(CCylindricityCharacteristicItemType const& init);
	void operator=(CCylindricityCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricityCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricityCharacteristicItemType
