#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionPressureType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionPressureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionPressureType(CCriterionPressureType const& init);
	void operator=(CCriterionPressureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionPressureType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionPressureType_altova_pressureUnit, 0, 0> pressureUnit;	// pressureUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionPressureType
