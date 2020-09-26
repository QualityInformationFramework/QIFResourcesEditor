#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsUserDefinedUnitType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsUserDefinedUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsUserDefinedUnitType(CSummaryStatisticsUserDefinedUnitType const& init);
	void operator=(CSummaryStatisticsUserDefinedUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsUserDefinedUnitType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsUserDefinedUnitType_altova_unitName, 0, 0> unitName;	// unitName Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsUserDefinedUnitType
