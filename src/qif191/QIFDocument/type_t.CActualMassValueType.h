#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualMassValueType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CActualMassValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualMassValueType(CActualMassValueType const& init);
	void operator=(CActualMassValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualMassValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CActualMassValueType_altova_massUnit, 0, 0> massUnit;	// massUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualMassValueType
