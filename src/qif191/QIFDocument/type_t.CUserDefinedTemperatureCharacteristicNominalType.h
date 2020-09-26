#pragma once

#include "type_t.CTemperatureCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CUserDefinedTemperatureCharacteristicNominalType : public ::qif191::t::CTemperatureCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUserDefinedTemperatureCharacteristicNominalType(CUserDefinedTemperatureCharacteristicNominalType const& init);
	void operator=(CUserDefinedTemperatureCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUserDefinedTemperatureCharacteristicNominalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUserDefinedTemperatureCharacteristicNominalType
