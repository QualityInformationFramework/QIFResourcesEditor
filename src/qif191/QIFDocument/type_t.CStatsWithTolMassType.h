#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolMassType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolMassType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolMassType(CStatsWithTolMassType const& init);
	void operator=(CStatsWithTolMassType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolMassType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolMassType_altova_massUnit, 0, 0> massUnit;	// massUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolMassType
