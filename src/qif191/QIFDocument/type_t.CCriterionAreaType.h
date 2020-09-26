#pragma once

#include "type_t.CCriterionDecimalType.h"


namespace qif191
{

namespace t
{	

class CCriterionAreaType : public ::qif191::t::CCriterionDecimalType
{
public:
	QIF191_EXPORT CCriterionAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionAreaType(CCriterionAreaType const& init);
	void operator=(CCriterionAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionAreaType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CCriterionAreaType_altova_areaUnit, 0, 0> areaUnit;	// areaUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionAreaType
