#pragma once

#include "type_t.CPointRuleBaseType.h"


namespace qif191
{

namespace t
{	

class CElseRuleType : public ::qif191::t::CPointRuleBaseType
{
public:
	QIF191_EXPORT CElseRuleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElseRuleType(CElseRuleType const& init);
	void operator=(CElseRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElseRuleType); }
	MemberElement<t::CThenPointsType, _altova_mi_t_altova_CElseRuleType_altova_ThenPoints> ThenPoints;
	struct ThenPoints { typedef Iterator<t::CThenPointsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElseRuleType
