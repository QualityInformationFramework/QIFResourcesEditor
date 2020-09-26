#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualLinearValueType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CActualLinearValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualLinearValueType(CActualLinearValueType const& init);
	void operator=(CActualLinearValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualLinearValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CActualLinearValueType_altova_linearUnit, 0, 0> linearUnit;	// linearUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualLinearValueType
