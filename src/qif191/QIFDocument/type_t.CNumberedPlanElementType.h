#pragma once



namespace qif191
{

namespace t
{	

class CNumberedPlanElementType : public TypeBase
{
public:
	QIF191_EXPORT CNumberedPlanElementType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNumberedPlanElementType(CNumberedPlanElementType const& init);
	void operator=(CNumberedPlanElementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNumberedPlanElementType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CNumberedPlanElementType_altova_SequenceNumber> SequenceNumber;
	struct SequenceNumber { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CPlanElementBaseType, _altova_mi_t_altova_CNumberedPlanElementType_altova_PlanElement> PlanElement;
	struct PlanElement { typedef Iterator<t::CPlanElementBaseType> iterator; };
	MemberElement<t::CEvaluateSpecifiedCharacteristicsActionType, _altova_mi_t_altova_CNumberedPlanElementType_altova_EvaluateSpecifiedCharacteristics> EvaluateSpecifiedCharacteristics;
	struct EvaluateSpecifiedCharacteristics { typedef Iterator<t::CEvaluateSpecifiedCharacteristicsActionType> iterator; };
	MemberElement<t::CMeasureEvaluateAllActionType, _altova_mi_t_altova_CNumberedPlanElementType_altova_MeasureEvaluateAll> MeasureEvaluateAll;
	struct MeasureEvaluateAll { typedef Iterator<t::CMeasureEvaluateAllActionType> iterator; };
	MemberElement<t::CMeasureEvaluateSpecifiedActionType, _altova_mi_t_altova_CNumberedPlanElementType_altova_MeasureEvaluateSpecified> MeasureEvaluateSpecified;
	struct MeasureEvaluateSpecified { typedef Iterator<t::CMeasureEvaluateSpecifiedActionType> iterator; };
	MemberElement<t::CMeasureSpecifiedFeaturesActionType, _altova_mi_t_altova_CNumberedPlanElementType_altova_MeasureSpecifiedFeatures> MeasureSpecifiedFeatures;
	struct MeasureSpecifiedFeatures { typedef Iterator<t::CMeasureSpecifiedFeaturesActionType> iterator; };
	MemberElement<t::CMeasureSpecifiedMeasurandsActionType, _altova_mi_t_altova_CNumberedPlanElementType_altova_MeasureSpecifiedMeasurands> MeasureSpecifiedMeasurands;
	struct MeasureSpecifiedMeasurands { typedef Iterator<t::CMeasureSpecifiedMeasurandsActionType> iterator; };
	MemberElement<t::COneOfActionGroupType, _altova_mi_t_altova_CNumberedPlanElementType_altova_OneOfActionGroup> OneOfActionGroup;
	struct OneOfActionGroup { typedef Iterator<t::COneOfActionGroupType> iterator; };
	MemberElement<t::COrderedActionGroupType, _altova_mi_t_altova_CNumberedPlanElementType_altova_OrderedActionGroup> OrderedActionGroup;
	struct OrderedActionGroup { typedef Iterator<t::COrderedActionGroupType> iterator; };
	MemberElement<t::CPartiallyOrderedActionGroupType, _altova_mi_t_altova_CNumberedPlanElementType_altova_PartiallyOrderedActionGroup> PartiallyOrderedActionGroup;
	struct PartiallyOrderedActionGroup { typedef Iterator<t::CPartiallyOrderedActionGroupType> iterator; };
	MemberElement<t::CPickSomeActionGroupType, _altova_mi_t_altova_CNumberedPlanElementType_altova_PickSomeActionGroup> PickSomeActionGroup;
	struct PickSomeActionGroup { typedef Iterator<t::CPickSomeActionGroupType> iterator; };
	MemberElement<t::CUnorderedActionGroupType, _altova_mi_t_altova_CNumberedPlanElementType_altova_UnorderedActionGroup> UnorderedActionGroup;
	struct UnorderedActionGroup { typedef Iterator<t::CUnorderedActionGroupType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNumberedPlanElementType
