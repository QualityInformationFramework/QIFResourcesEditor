#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionForceType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionForceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionForceType(CCriterionForceType const& init);
	void operator=(CCriterionForceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionForceType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionForceType_altova_forceUnit, 0, 0> forceUnit;	// forceUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionForceType
