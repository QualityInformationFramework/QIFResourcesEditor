#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionAngularType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionAngularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionAngularType(CCriterionAngularType const& init);
	void operator=(CCriterionAngularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionAngularType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionAngularType_altova_angularUnit, 0, 0> angularUnit;	// angularUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionAngularType
