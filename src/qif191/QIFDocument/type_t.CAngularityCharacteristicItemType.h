#pragma once

#include "type_t.COrientationCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularityCharacteristicItemType : public ::qif191::t::COrientationCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAngularityCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularityCharacteristicItemType(CAngularityCharacteristicItemType const& init);
	void operator=(CAngularityCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularityCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularityCharacteristicItemType
