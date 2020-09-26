#pragma once

#include "type_t.CSummaryStatisticsType.h"


namespace qif191
{

namespace t
{	

class CSummaryStatisticsAngularType : public ::qif191::t::CSummaryStatisticsType
{
public:
	QIF191_EXPORT CSummaryStatisticsAngularType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsAngularType(CSummaryStatisticsAngularType const& init);
	void operator=(CSummaryStatisticsAngularType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsAngularType); }

	MemberAttribute<string_type,_altova_mi_t_altova_CSummaryStatisticsAngularType_altova_angularUnit, 0, 0> angularUnit;	// angularUnit Ctoken
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsAngularType
