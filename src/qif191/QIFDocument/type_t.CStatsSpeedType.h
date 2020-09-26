#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsSpeedType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsSpeedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsSpeedType(CStatsSpeedType const& init);
	void operator=(CStatsSpeedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsSpeedType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CStatsSpeedType_altova_speedUnit, 0, 0> speedUnit;	// speedUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsSpeedType
