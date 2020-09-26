#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionSpeedType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionSpeedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionSpeedType(CCriterionSpeedType const& init);
	void operator=(CCriterionSpeedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionSpeedType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionSpeedType_altova_speedUnit, 0, 0> speedUnit;	// speedUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionSpeedType
