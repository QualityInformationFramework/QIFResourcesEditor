#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsPassFailType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsPassFailType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsPassFailType(CStatsPassFailType const& init);
	void operator=(CStatsPassFailType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsPassFailType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CStatsPassFailType_altova_FailurePercentage> FailurePercentage;
	struct FailurePercentage { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsPassFailType_altova_NumberFailures> NumberFailures;
	struct NumberFailures { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsPassFailType
