#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolUserDefinedUnitType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolUserDefinedUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolUserDefinedUnitType(CStatsWithTolUserDefinedUnitType const& init);
	void operator=(CStatsWithTolUserDefinedUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolUserDefinedUnitType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolUserDefinedUnitType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolUserDefinedUnitType
