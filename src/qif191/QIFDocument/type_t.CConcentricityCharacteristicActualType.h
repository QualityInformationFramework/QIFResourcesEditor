#pragma once

#include "type_t.CLocationCharacteristicActualBaseType.h"


namespace qif191
{

namespace t
{	

class CConcentricityCharacteristicActualType : public ::qif191::t::CLocationCharacteristicActualBaseType
{
public:
	QIF191_EXPORT CConcentricityCharacteristicActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityCharacteristicActualType(CConcentricityCharacteristicActualType const& init);
	void operator=(CConcentricityCharacteristicActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityCharacteristicActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityCharacteristicActualType
