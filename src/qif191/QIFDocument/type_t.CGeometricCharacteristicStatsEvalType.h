#pragma once

#include "type_t.CCharacteristicStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CGeometricCharacteristicStatsEvalType : public ::qif191::t::CCharacteristicStatsEvalBaseType
{
public:
	QIF191_EXPORT CGeometricCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGeometricCharacteristicStatsEvalType(CGeometricCharacteristicStatsEvalType const& init);
	void operator=(CGeometricCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGeometricCharacteristicStatsEvalType); }
	MemberElement<t::CStatsWithTolLinearType, _altova_mi_t_altova_CGeometricCharacteristicStatsEvalType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CGeometricCharacteristicStatsEvalType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CGeometricCharacteristicStatsEvalType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGeometricCharacteristicStatsEvalType
