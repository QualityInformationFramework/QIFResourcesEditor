#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualTimeValueType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CActualTimeValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualTimeValueType(CActualTimeValueType const& init);
	void operator=(CActualTimeValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualTimeValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CActualTimeValueType_altova_timeUnit, 0, 0> timeUnit;	// timeUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualTimeValueType
