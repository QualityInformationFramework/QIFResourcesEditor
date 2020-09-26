#pragma once

#include "type_t.CActionGroupBaseType.h"


namespace qif191
{

namespace t
{	

class CPartiallyOrderedActionGroupType : public ::qif191::t::CActionGroupBaseType
{
public:
	QIF191_EXPORT CPartiallyOrderedActionGroupType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPartiallyOrderedActionGroupType(CPartiallyOrderedActionGroupType const& init);
	void operator=(CPartiallyOrderedActionGroupType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPartiallyOrderedActionGroupType); }
	MemberElement<t::CStepsWithPredecessorsType, _altova_mi_t_altova_CPartiallyOrderedActionGroupType_altova_StepsWithPredecessors> StepsWithPredecessors;
	struct StepsWithPredecessors { typedef Iterator<t::CStepsWithPredecessorsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPartiallyOrderedActionGroupType
