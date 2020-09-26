#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicStatsEvalBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicStatsEvalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicStatsEvalBaseType(CCharacteristicStatsEvalBaseType const& init);
	void operator=(CCharacteristicStatsEvalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicStatsEvalBaseType); }
	MemberElement<t::CAttributesType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_Attributes> Attributes;
	struct Attributes { typedef Iterator<t::CAttributesType> iterator; };
	MemberElement<t::CStatsArrayIdType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_ActualIds> ActualIds;
	struct ActualIds { typedef Iterator<t::CStatsArrayIdType> iterator; };
	MemberElement<t::CActualSubgroupType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_Subgroup> Subgroup;
	struct Subgroup { typedef Iterator<t::CActualSubgroupType> iterator; };
	MemberElement<t::CStatsEvalStatusType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_Status> Status;
	struct Status { typedef Iterator<t::CStatsEvalStatusType> iterator; };
	MemberElement<t::CStudyIssueType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_StudyIssue> StudyIssue;
	struct StudyIssue { typedef Iterator<t::CStudyIssueType> iterator; };
	MemberElement<t::CDistributionTransformationType, _altova_mi_t_altova_CCharacteristicStatsEvalBaseType_altova_DistributionTransformation> DistributionTransformation;
	struct DistributionTransformation { typedef Iterator<t::CDistributionTransformationType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicStatsEvalBaseType
