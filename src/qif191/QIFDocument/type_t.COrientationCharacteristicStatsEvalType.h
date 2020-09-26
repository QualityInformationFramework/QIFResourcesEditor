#pragma once

#include "type_t.CGeometricCharacteristicStatsEvalType.h"


namespace qif191
{

namespace t
{	

class COrientationCharacteristicStatsEvalType : public ::qif191::t::CGeometricCharacteristicStatsEvalType
{
public:
	QIF191_EXPORT COrientationCharacteristicStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationCharacteristicStatsEvalType(COrientationCharacteristicStatsEvalType const& init);
	void operator=(COrientationCharacteristicStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationCharacteristicStatsEvalType); }
	MemberElement<t::COneSidedCapabilityCalculationEnumTypeType, _altova_mi_t_altova_COrientationCharacteristicStatsEvalType_altova_CapabilityCalculationMethod> CapabilityCalculationMethod;
	struct CapabilityCalculationMethod { typedef Iterator<t::COneSidedCapabilityCalculationEnumTypeType> iterator; };
	MemberElement<t::CStatsPassFailType, _altova_mi_t_altova_COrientationCharacteristicStatsEvalType_altova_DatumsOkStats> DatumsOkStats;
	struct DatumsOkStats { typedef Iterator<t::CStatsPassFailType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_COrientationCharacteristicStatsEvalType_altova_BonusStats> BonusStats;
	struct BonusStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_COrientationCharacteristicStatsEvalType_altova_ReferenceLengthStats> ReferenceLengthStats;
	struct ReferenceLengthStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationCharacteristicStatsEvalType
