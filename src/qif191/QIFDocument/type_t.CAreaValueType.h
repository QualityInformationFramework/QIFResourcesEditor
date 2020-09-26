#pragma once

#include "type_t.CSpecifiedDecimalType.h"


namespace qif191
{

namespace t
{	

class CAreaValueType : public ::qif191::t::CSpecifiedDecimalType
{
public:
	QIF191_EXPORT CAreaValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAreaValueType(CAreaValueType const& init);
	void operator=(CAreaValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAreaValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CAreaValueType_altova_areaUnit, 0, 0> areaUnit;	// areaUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAreaValueType
