#pragma once

#include "type_t.CCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CDimensionalCharacteristicActualBaseType : public ::qif191::t::CCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CDimensionalCharacteristicActualBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDimensionalCharacteristicActualBaseType(CDimensionalCharacteristicActualBaseType const& init);
	void operator=(CDimensionalCharacteristicActualBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDimensionalCharacteristicActualBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDimensionalCharacteristicActualBaseType
