#pragma once

#include "type_t.CQIFRuleBaseType.h"


namespace qif191
{

namespace t
{	

class CPointRuleBaseType : public ::qif191::t::CQIFRuleBaseType
{
public:
	QIF191_EXPORT CPointRuleBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointRuleBaseType(CPointRuleBaseType const& init);
	void operator=(CPointRuleBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointRuleBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointRuleBaseType
