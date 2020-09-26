#pragma once

#include "type_t.CLocationCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CSymmetryCharacteristicItemType : public ::qif191::t::CLocationCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CSymmetryCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSymmetryCharacteristicItemType(CSymmetryCharacteristicItemType const& init);
	void operator=(CSymmetryCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSymmetryCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSymmetryCharacteristicItemType
