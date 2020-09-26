#pragma once



namespace qif191
{

namespace t
{	

class CStatisticalStudyPlanBaseType : public TypeBase
{
public:
	QIF191_EXPORT CStatisticalStudyPlanBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatisticalStudyPlanBaseType(CStatisticalStudyPlanBaseType const& init);
	void operator=(CStatisticalStudyPlanBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatisticalStudyPlanBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_ThisStatisticalStudyPlanInstanceQPId> ThisStatisticalStudyPlanInstanceQPId;
	struct ThisStatisticalStudyPlanInstanceQPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_FeatureItemIds> FeatureItemIds;
	struct FeatureItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_CalculateAverageFeatures> CalculateAverageFeatures;
	struct CalculateAverageFeatures { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_CharacteristicItemIds> CharacteristicItemIds;
	struct CharacteristicItemIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CListAccumulatedStatsValuesTypeType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_StatsValuesPerChar> StatsValuesPerChar;
	struct StatsValuesPerChar { typedef Iterator<t::CListAccumulatedStatsValuesTypeType> iterator; };
	MemberElement<t::CListSubgroupStatsValuesTypeType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_StatsValuesPerSubgroup> StatsValuesPerSubgroup;
	struct StatsValuesPerSubgroup { typedef Iterator<t::CListSubgroupStatsValuesTypeType> iterator; };
	MemberElement<t::CSummaryStatsValuesType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_StatsValuesSummary> StatsValuesSummary;
	struct StatsValuesSummary { typedef Iterator<t::CSummaryStatsValuesType> iterator; };
	MemberElement<t::CPreInspectionTraceabilityType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_PreInspectionTraceability> PreInspectionTraceability;
	struct PreInspectionTraceability { typedef Iterator<t::CPreInspectionTraceabilityType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_PlanId> PlanId;
	struct PlanId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatisticalStudyPlanBaseType_altova_CorrectiveActionPlanId> CorrectiveActionPlanId;
	struct CorrectiveActionPlanId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatisticalStudyPlanBaseType
