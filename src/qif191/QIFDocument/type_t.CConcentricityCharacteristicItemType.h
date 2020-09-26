#pragma once

#include "type_t.CLocationCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CConcentricityCharacteristicItemType : public ::qif191::t::CLocationCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CConcentricityCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityCharacteristicItemType(CConcentricityCharacteristicItemType const& init);
	void operator=(CConcentricityCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityCharacteristicItemType
