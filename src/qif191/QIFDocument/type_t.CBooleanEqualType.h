#pragma once

#include "type_t.CBinaryBooleanExpressionBaseType.h"


namespace qif191
{

namespace t
{	

class CBooleanEqualType : public ::qif191::t::CBinaryBooleanExpressionBaseType
{
public:
	QIF191_EXPORT CBooleanEqualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBooleanEqualType(CBooleanEqualType const& init);
	void operator=(CBooleanEqualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBooleanEqualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBooleanEqualType
