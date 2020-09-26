#pragma once

#include "type_t.COrientationCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CAngularityCharacteristicActualType : public ::qif191::t::COrientationCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CAngularityCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngularityCharacteristicActualType(CAngularityCharacteristicActualType const& init);
	void operator=(CAngularityCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngularityCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngularityCharacteristicActualType
