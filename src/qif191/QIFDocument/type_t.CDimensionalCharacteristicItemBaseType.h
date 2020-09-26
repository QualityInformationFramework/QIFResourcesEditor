#pragma once

#include "type_t.CCharacteristicItemBaseType.h"


namespace qif191
{

namespace t
{	

class CDimensionalCharacteristicItemBaseType : public ::qif191::t::CCharacteristicItemBaseType
{
public:
	QIF191_EXPORT CDimensionalCharacteristicItemBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDimensionalCharacteristicItemBaseType(CDimensionalCharacteristicItemBaseType const& init);
	void operator=(CDimensionalCharacteristicItemBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDimensionalCharacteristicItemBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDimensionalCharacteristicItemBaseType
