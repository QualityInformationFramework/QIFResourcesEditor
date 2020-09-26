#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CSpeedValueType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CSpeedValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpeedValueType(CSpeedValueType const& init);
	void operator=(CSpeedValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpeedValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CSpeedValueType_altova_speedUnit, 0, 0> speedUnit;	// speedUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpeedValueType
