#pragma once

#include "type_t.CStatsNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsUserDefinedUnitType : public ::qif191::t::CStatsNumericalBaseType
{
public:
	QIF191_EXPORT CStatsUserDefinedUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsUserDefinedUnitType(CStatsUserDefinedUnitType const& init);
	void operator=(CStatsUserDefinedUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsUserDefinedUnitType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsUserDefinedUnitType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsUserDefinedUnitType
