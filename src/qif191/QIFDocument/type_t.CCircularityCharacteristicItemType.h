#pragma once

#include "type_t.CFormCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CCircularityCharacteristicItemType : public ::qif191::t::CFormCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CCircularityCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircularityCharacteristicItemType(CCircularityCharacteristicItemType const& init);
	void operator=(CCircularityCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircularityCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircularityCharacteristicItemType
