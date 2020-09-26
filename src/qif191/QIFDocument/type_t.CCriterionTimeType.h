#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionTimeType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionTimeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionTimeType(CCriterionTimeType const& init);
	void operator=(CCriterionTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionTimeType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionTimeType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionTimeType
