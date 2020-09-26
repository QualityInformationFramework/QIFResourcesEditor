#pragma once

#include "type_t.CGeometricCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class CLocationCharacteristicStatsEvalType : public ::qif191::t::CGeometricCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT CLocationCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLocationCharacteristicStatsEvalType(CLocationCharacteristicStatsEvalType const& init);
	void operator=(CLocationCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLocationCharacteristicStatsEvalType); }
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_CLocationCharacteristicStatsEvalType_altova_DatumsOkStats> DatumsOkStats;
	struct DatumsOkStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLocationCharacteristicStatsEvalType
