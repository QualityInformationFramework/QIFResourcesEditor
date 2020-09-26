#pragma once

#include "type_t.CActionGroupBaseType.h"


namespace qif191
{

namespace t
{	

class CUnorderedActionGroupType : public ::qif191::t::CActionGroupBaseType
{
public:
	QIF191_EXPORT CUnorderedActionGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUnorderedActionGroupType(CUnorderedActionGroupType const& init);
	void operator=(CUnorderedActionGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUnorderedActionGroupType); }
	MemberElement<t::CUnnumberedPlanElementsType, _altova_mi_t_altova_CUnorderedActionGroupType_altova_Steps> Steps;
	struct Steps { typedef Iterator<t::CUnnumberedPlanElementsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUnorderedActionGroupType
