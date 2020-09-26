#pragma once

#include "type_t.CProfileCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CPointProfileCharacteristicItemType : public ::qif191::t::CProfileCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CPointProfileCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointProfileCharacteristicItemType(CPointProfileCharacteristicItemType const& init);
	void operator=(CPointProfileCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointProfileCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointProfileCharacteristicItemType
