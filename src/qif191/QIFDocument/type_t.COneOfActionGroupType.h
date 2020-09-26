#pragma once

#include "type_t.CActionGroupBaseType.h"


namespace qif191
{

namespace t
{	

class COneOfActionGroupType : public ::qif191::t::CActionGroupBaseType
{
public:
	QIF191_EXPORT COneOfActionGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COneOfActionGroupType(COneOfActionGroupType const& init);
	void operator=(COneOfActionGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COneOfActionGroupType); }
	MemberElement<t::CNumberedPlanElementsType, _altova_mi_t_altova_COneOfActionGroupType_altova_Steps> Steps;
	struct Steps { typedef Iterator<t::CNumberedPlanElementsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COneOfActionGroupType
