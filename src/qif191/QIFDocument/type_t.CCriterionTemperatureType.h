#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionTemperatureType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionTemperatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionTemperatureType(CCriterionTemperatureType const& init);
	void operator=(CCriterionTemperatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionTemperatureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionTemperatureType_altova_temperatureUnit, 0, 0> temperatureUnit;	// temperatureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionTemperatureType
