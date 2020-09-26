#pragma once

#include "type_t.CActualDecimalType.h"


namespace qif191
{

namespace t
{	

class CActualSpeedValueType : public ::qif191::t::CActualDecimalType
{
public:
	QIF191_EXPORT CActualSpeedValueType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActualSpeedValueType(CActualSpeedValueType const& init);
	void operator=(CActualSpeedValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActualSpeedValueType); }
	QIF191_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_t_altova_CActualSpeedValueType_altova_speedUnit, 0, 0> speedUnit;	// speedUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActualSpeedValueType
