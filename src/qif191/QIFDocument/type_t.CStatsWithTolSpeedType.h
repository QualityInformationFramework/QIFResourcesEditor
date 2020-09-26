#pragma once

#include "type_t.CStatsWithTolNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolSpeedType : public ::qif191::t::CStatsWithTolNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolSpeedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolSpeedType(CStatsWithTolSpeedType const& init);
	void operator=(CStatsWithTolSpeedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolSpeedType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsWithTolSpeedType_altova_speedUnit, 0, 0> speedUnit;	// speedUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolSpeedType
