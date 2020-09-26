#pragma once

#include "type_t.CAngularCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleFromCharacteristicItemType : public ::qif191::t::CAngularCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAngleFromCharacteristicItemType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleFromCharacteristicItemType(CAngleFromCharacteristicItemType const& init);
	void operator=(CAngleFromCharacteristicItemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleFromCharacteristicItemType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleFromCharacteristicItemType
