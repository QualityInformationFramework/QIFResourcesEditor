#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionUserDefinedUnitType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionUserDefinedUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionUserDefinedUnitType(CCriterionUserDefinedUnitType const& init);
	void operator=(CCriterionUserDefinedUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionUserDefinedUnitType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionUserDefinedUnitType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionUserDefinedUnitType
