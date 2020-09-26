#pragma once



namespace qif191
{

namespace t
{	

class CStatisticalStudyResultsBaseType : public TypeBase
{
public:
	QIF191_EXPORT CStatisticalStudyResultsBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatisticalStudyResultsBaseType(CStatisticalStudyResultsBaseType const& init);
	void operator=(CStatisticalStudyResultsBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatisticalStudyResultsBaseType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_id, 0, 0> id;	// id CQIFIdType
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CQPIdTypeType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_ThisStatisticalStudyResultsInstanceQPId> ThisStatisticalStudyResultsInstanceQPId;
	struct ThisStatisticalStudyResultsInstanceQPId { typedef Iterator<t::CQPIdTypeType> iterator; };
	MemberElement<t::CStatsEvalStatusType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_Status> Status;
	struct Status { typedef Iterator<t::CStatsEvalStatusType> iterator; };
	MemberElement<t::CStudyIssueType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_StudyIssue> StudyIssue;
	struct StudyIssue { typedef Iterator<t::CStudyIssueType> iterator; };
	MemberElement<t::CInspectionTraceabilityType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_InspectionTraceability> InspectionTraceability;
	struct InspectionTraceability { typedef Iterator<t::CInspectionTraceabilityType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_Name> Name;
	struct Name { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_Description> Description;
	struct Description { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_StudyId> StudyId;
	struct StudyId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_ResultsId> ResultsId;
	struct ResultsId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQPIdReferenceTypeType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_ResultsQPId> ResultsQPId;
	struct ResultsQPId { typedef Iterator<t::CQPIdReferenceTypeType> iterator; };
	MemberElement<t::CExternalFileReferenceType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_ResultsFile> ResultsFile;
	struct ResultsFile { typedef Iterator<t::CExternalFileReferenceType> iterator; };
	MemberElement<t::CAverageFeatureType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_AverageFeature> AverageFeature;
	struct AverageFeature { typedef Iterator<t::CAverageFeatureType> iterator; };
	MemberElement<t::CCharacteristicsStatsType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_CharacteristicsStats> CharacteristicsStats;
	struct CharacteristicsStats { typedef Iterator<t::CCharacteristicsStatsType> iterator; };
	MemberElement<t::CSummaryStatisticsLinearType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_LinearStatsSummary> LinearStatsSummary;
	struct LinearStatsSummary { typedef Iterator<t::CSummaryStatisticsLinearType> iterator; };
	MemberElement<t::CSummaryStatisticsAngularType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_AngularStatsSummary> AngularStatsSummary;
	struct AngularStatsSummary { typedef Iterator<t::CSummaryStatisticsAngularType> iterator; };
	MemberElement<t::CSummaryStatisticsAreaType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_AreaStatsSummary> AreaStatsSummary;
	struct AreaStatsSummary { typedef Iterator<t::CSummaryStatisticsAreaType> iterator; };
	MemberElement<t::CSummaryStatisticsForceType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_ForceStatsSummary> ForceStatsSummary;
	struct ForceStatsSummary { typedef Iterator<t::CSummaryStatisticsForceType> iterator; };
	MemberElement<t::CSummaryStatisticsMassType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_MassStatsSummary> MassStatsSummary;
	struct MassStatsSummary { typedef Iterator<t::CSummaryStatisticsMassType> iterator; };
	MemberElement<t::CSummaryStatisticsPressureType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_PressureStatsSummary> PressureStatsSummary;
	struct PressureStatsSummary { typedef Iterator<t::CSummaryStatisticsPressureType> iterator; };
	MemberElement<t::CSummaryStatisticsSpeedType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_SpeedStatsSummary> SpeedStatsSummary;
	struct SpeedStatsSummary { typedef Iterator<t::CSummaryStatisticsSpeedType> iterator; };
	MemberElement<t::CSummaryStatisticsTemperatureType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_TemperatureStatsSummary> TemperatureStatsSummary;
	struct TemperatureStatsSummary { typedef Iterator<t::CSummaryStatisticsTemperatureType> iterator; };
	MemberElement<t::CSummaryStatisticsTimeType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_TimeStatsSummary> TimeStatsSummary;
	struct TimeStatsSummary { typedef Iterator<t::CSummaryStatisticsTimeType> iterator; };
	MemberElement<t::CSummaryStatisticsUserDefinedUnitType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_UserDefinedUnitStatsSummary> UserDefinedUnitStatsSummary;
	struct UserDefinedUnitStatsSummary { typedef Iterator<t::CSummaryStatisticsUserDefinedUnitType> iterator; };
	MemberElement<t::CSummaryStatisticsType, _altova_mi_t_altova_CStatisticalStudyResultsBaseType_altova_StatsSummary> StatsSummary;
	struct StatsSummary { typedef Iterator<t::CSummaryStatisticsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatisticalStudyResultsBaseType
