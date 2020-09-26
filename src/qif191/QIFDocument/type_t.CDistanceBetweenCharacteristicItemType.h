#pragma once

#include "type_t.CLinearCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CDistanceBetweenCharacteristicItemType : public ::qif191::t::CLinearCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CDistanceBetweenCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceBetweenCharacteristicItemType(CDistanceBetweenCharacteristicItemType const& init);
	void operator=(CDistanceBetweenCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceBetweenCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceBetweenCharacteristicItemType
