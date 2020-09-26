#pragma once

#include "type_t.CDimensionalCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularCharacteristicItemBaseType : public ::qif191::t::CDimensionalCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CAngularCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularCharacteristicItemBaseType(CAngularCharacteristicItemBaseType const& init);
	void operator=(CAngularCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularCharacteristicItemBaseType
