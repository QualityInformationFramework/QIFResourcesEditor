#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementPlanType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementPlanType(CMeasurementPlanType const& init);
	void operator=(CMeasurementPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementPlanType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CMeasurementPlanType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	MemberElement<t::CQPIdReferenceTypeType, _altova_mi_t_altova_CMeasurementPlanType_altova_RulesUsedQPId> RulesUsedQPId;
	struct RulesUsedQPId { typedef Iterator<t::CQPIdReferenceTypeType> iterator; };
	MemberElement<t::CQPIdReferenceTypeType, _altova_mi_t_altova_CMeasurementPlanType_altova_RulesToUseQPId> RulesToUseQPId;
	struct RulesToUseQPId { typedef Iterator<t::CQPIdReferenceTypeType> iterator; };
	MemberElement<t::CWorkInstructionsType, _altova_mi_t_altova_CMeasurementPlanType_altova_WorkInstructions> WorkInstructions;
	struct WorkInstructions { typedef Iterator<t::CWorkInstructionsType> iterator; };
	MemberElement<t::CActionMethodsType, _altova_mi_t_altova_CMeasurementPlanType_altova_ActionMethods> ActionMethods;
	struct ActionMethods { typedef Iterator<t::CActionMethodsType> iterator; };
	MemberElement<t::CMeasurandsType, _altova_mi_t_altova_CMeasurementPlanType_altova_Measurands> Measurands;
	struct Measurands { typedef Iterator<t::CMeasurandsType> iterator; };
	MemberElement<t::CActionGroupBaseType, _altova_mi_t_altova_CMeasurementPlanType_altova_PlanRoot> PlanRoot;
	struct PlanRoot { typedef Iterator<t::CActionGroupBaseType> iterator; };
	MemberElement<t::COneOfActionGroupType, _altova_mi_t_altova_CMeasurementPlanType_altova_OneOfPlanRoot> OneOfPlanRoot;
	struct OneOfPlanRoot { typedef Iterator<t::COneOfActionGroupType> iterator; };
	MemberElement<t::COrderedActionGroupType, _altova_mi_t_altova_CMeasurementPlanType_altova_OrderedPlanRoot> OrderedPlanRoot;
	struct OrderedPlanRoot { typedef Iterator<t::COrderedActionGroupType> iterator; };
	MemberElement<t::CPartiallyOrderedActionGroupType, _altova_mi_t_altova_CMeasurementPlanType_altova_PartiallyOrderedPlanRoot> PartiallyOrderedPlanRoot;
	struct PartiallyOrderedPlanRoot { typedef Iterator<t::CPartiallyOrderedActionGroupType> iterator; };
	MemberElement<t::CPickSomeActionGroupType, _altova_mi_t_altova_CMeasurementPlanType_altova_PickSomePlanRoot> PickSomePlanRoot;
	struct PickSomePlanRoot { typedef Iterator<t::CPickSomeActionGroupType> iterator; };
	MemberElement<t::CUnorderedActionGroupType, _altova_mi_t_altova_CMeasurementPlanType_altova_UnorderedPlanRoot> UnorderedPlanRoot;
	struct UnorderedPlanRoot { typedef Iterator<t::CUnorderedActionGroupType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementPlanType
