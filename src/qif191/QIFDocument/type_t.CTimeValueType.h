#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CTimeValueType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CTimeValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeValueType(CTimeValueType const& init);
	void operator=(CTimeValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CTimeValueType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeValueType
