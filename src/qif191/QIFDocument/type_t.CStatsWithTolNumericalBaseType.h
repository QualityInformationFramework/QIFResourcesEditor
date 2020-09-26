#pragma once

#include "type_t.CStatsNumericalBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsWithTolNumericalBaseType : public ::qif191::t::CStatsNumericalBaseType
{
public:
	QIF191_EXPORT CStatsWithTolNumericalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsWithTolNumericalBaseType(CStatsWithTolNumericalBaseType const& init);
	void operator=(CStatsWithTolNumericalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsWithTolNumericalBaseType); }
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_NumberOutOfTolerance> NumberOutOfTolerance;
	struct NumberOutOfTolerance { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_OutOfToleranceIds> OutOfToleranceIds;
	struct OutOfToleranceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CSubgroupIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_SubgroupNumberOutOfTolerance> SubgroupNumberOutOfTolerance;
	struct SubgroupNumberOutOfTolerance { typedef Iterator<t::CSubgroupIntegerType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_NumberOverUpperTolerance> NumberOverUpperTolerance;
	struct NumberOverUpperTolerance { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_OverUpperToleranceIds> OverUpperToleranceIds;
	struct OverUpperToleranceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CSubgroupIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_SubgroupNumberOverUpperTolerance> SubgroupNumberOverUpperTolerance;
	struct SubgroupNumberOverUpperTolerance { typedef Iterator<t::CSubgroupIntegerType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_NumberUnderLowerTolerance> NumberUnderLowerTolerance;
	struct NumberUnderLowerTolerance { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_UnderLowerToleranceIds> UnderLowerToleranceIds;
	struct UnderLowerToleranceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CSubgroupIntegerType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_SubgroupNumberUnderLowerTolerance> SubgroupNumberUnderLowerTolerance;
	struct SubgroupNumberUnderLowerTolerance { typedef Iterator<t::CSubgroupIntegerType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Cp> Cp;
	struct Cp { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Cpk> Cpk;
	struct Cpk { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Pp> Pp;
	struct Pp { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Ppk> Ppk;
	struct Ppk { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Cm> Cm;
	struct Cm { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_Cmk> Cmk;
	struct Cmk { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativeAppraiserVariation> RelativeAppraiserVariation;
	struct RelativeAppraiserVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativeEquipmentVariation> RelativeEquipmentVariation;
	struct RelativeEquipmentVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativeInteraction> RelativeInteraction;
	struct RelativeInteraction { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativeGageRandR> RelativeGageRandR;
	struct RelativeGageRandR { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativePartVariation> RelativePartVariation;
	struct RelativePartVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsWithTolNumericalBaseType_altova_RelativeTotalVariation> RelativeTotalVariation;
	struct RelativeTotalVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsWithTolNumericalBaseType
