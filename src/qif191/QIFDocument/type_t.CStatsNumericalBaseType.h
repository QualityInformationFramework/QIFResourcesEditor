#pragma once

#include "type_t.CStatsBaseType.h"


namespace qif191
{

namespace t
{	

class CStatsNumericalBaseType : public ::qif191::t::CStatsBaseType
{
public:
	QIF191_EXPORT CStatsNumericalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsNumericalBaseType(CStatsNumericalBaseType const& init);
	void operator=(CStatsNumericalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatsNumericalBaseType); }
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Average> Average;
	struct Average { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CSubgroupDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_SubgroupAverage> SubgroupAverage;
	struct SubgroupAverage { typedef Iterator<t::CSubgroupDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Difference> Difference;
	struct Difference { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CSubgroupDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_SubgroupDifference> SubgroupDifference;
	struct SubgroupDifference { typedef Iterator<t::CSubgroupDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_RootMeanSquare> RootMeanSquare;
	struct RootMeanSquare { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Maximum> Maximum;
	struct Maximum { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_MaximumId> MaximumId;
	struct MaximumId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CSubgroupDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_SubgroupMaximum> SubgroupMaximum;
	struct SubgroupMaximum { typedef Iterator<t::CSubgroupDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Minimum> Minimum;
	struct Minimum { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_MinimumId> MinimumId;
	struct MinimumId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CSubgroupDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_SubgroupMinimum> SubgroupMinimum;
	struct SubgroupMinimum { typedef Iterator<t::CSubgroupDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Range> Range;
	struct Range { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CSubgroupDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_SubgroupRange> SubgroupRange;
	struct SubgroupRange { typedef Iterator<t::CSubgroupDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_AverageRange> AverageRange;
	struct AverageRange { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_StandardDeviation> StandardDeviation;
	struct StandardDeviation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Skew> Skew;
	struct Skew { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Kurtosis> Kurtosis;
	struct Kurtosis { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Normality> Normality;
	struct Normality { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_ProcessVariation> ProcessVariation;
	struct ProcessVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_EstimatedStandardDeviation> EstimatedStandardDeviation;
	struct EstimatedStandardDeviation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_UpperControlLimit> UpperControlLimit;
	struct UpperControlLimit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_LowerControlLimit> LowerControlLimit;
	struct LowerControlLimit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_UpperControlLimitRange> UpperControlLimitRange;
	struct UpperControlLimitRange { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_LowerControlLimitRange> LowerControlLimitRange;
	struct LowerControlLimitRange { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_NumberOutOfControl> NumberOutOfControl;
	struct NumberOutOfControl { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_OutOfControlIds> OutOfControlIds;
	struct OutOfControlIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_AppraiserVariation> AppraiserVariation;
	struct AppraiserVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_EquipmentVariation> EquipmentVariation;
	struct EquipmentVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Interaction> Interaction;
	struct Interaction { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_GageRandR> GageRandR;
	struct GageRandR { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_PartVariation> PartVariation;
	struct PartVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_TotalVariation> TotalVariation;
	struct TotalVariation { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Linearity> Linearity;
	struct Linearity { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_Bias> Bias;
	struct Bias { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_RelativeLinearity> RelativeLinearity;
	struct RelativeLinearity { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_RelativeBias> RelativeBias;
	struct RelativeBias { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_GoodnessOfFit> GoodnessOfFit;
	struct GoodnessOfFit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_RegressionSlope> RegressionSlope;
	struct RegressionSlope { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_RegressionIntercept> RegressionIntercept;
	struct RegressionIntercept { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_UpperConfidenceLimit> UpperConfidenceLimit;
	struct UpperConfidenceLimit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_LowerConfidenceLimit> LowerConfidenceLimit;
	struct LowerConfidenceLimit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CStatsNumericalBaseType_altova_TDistribution> TDistribution;
	struct TDistribution { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsNumericalBaseType
