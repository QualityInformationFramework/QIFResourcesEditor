#pragma once

#include "type_t.CAngularCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleBetweenCharacteristicItemType : public ::qif191::t::CAngularCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAngleBetweenCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleBetweenCharacteristicItemType(CAngleBetweenCharacteristicItemType const& init);
	void operator=(CAngleBetweenCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleBetweenCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleBetweenCharacteristicItemType
