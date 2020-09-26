#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CTemperatureValueType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CTemperatureValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTemperatureValueType(CTemperatureValueType const& init);
	void operator=(CTemperatureValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTemperatureValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CTemperatureValueType_altova_temperatureUnit, 0, 0> temperatureUnit;	// temperatureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTemperatureValueType
