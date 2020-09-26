#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionMassType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionMassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionMassType(CCriterionMassType const& init);
	void operator=(CCriterionMassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionMassType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionMassType_altova_massUnit, 0, 0> massUnit;	// massUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionMassType
