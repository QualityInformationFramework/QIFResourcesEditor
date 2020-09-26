#pragma once



namespace qif191
{

namespace t
{	

class CStatisticalStudyPlansType : public TypeBase
{
public:
	QIF191_EXPORT CStatisticalStudyPlansType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatisticalStudyPlansType(CStatisticalStudyPlansType const& init);
	void operator=(CStatisticalStudyPlansType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatisticalStudyPlansType); }
	MemberElement<t::CStatisticalStudyPlanBaseType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_StatisticalStudyPlan> StatisticalStudyPlan;
	struct StatisticalStudyPlan { typedef Iterator<t::CStatisticalStudyPlanBaseType> iterator; };
	MemberElement<t::CBiasStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_BiasStudyPlan> BiasStudyPlan;
	struct BiasStudyPlan { typedef Iterator<t::CBiasStudyPlanType> iterator; };
	MemberElement<t::CCapabilityStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_CapabilityStudyPlan> CapabilityStudyPlan;
	struct CapabilityStudyPlan { typedef Iterator<t::CCapabilityStudyPlanType> iterator; };
	MemberElement<t::CFirstArticleStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_FirstArticleStudyPlan> FirstArticleStudyPlan;
	struct FirstArticleStudyPlan { typedef Iterator<t::CFirstArticleStudyPlanType> iterator; };
	MemberElement<t::CGageRandRStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_GageRandRStudyPlan> GageRandRStudyPlan;
	struct GageRandRStudyPlan { typedef Iterator<t::CGageRandRStudyPlanType> iterator; };
	MemberElement<t::CLinearityStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_LinearityStudyPlan> LinearityStudyPlan;
	struct LinearityStudyPlan { typedef Iterator<t::CLinearityStudyPlanType> iterator; };
	MemberElement<t::CProcessDifferenceStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_ProcessDifferenceStudyPlan> ProcessDifferenceStudyPlan;
	struct ProcessDifferenceStudyPlan { typedef Iterator<t::CProcessDifferenceStudyPlanType> iterator; };
	MemberElement<t::CProductionStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_ProductionStudyPlan> ProductionStudyPlan;
	struct ProductionStudyPlan { typedef Iterator<t::CProductionStudyPlanType> iterator; };
	MemberElement<t::CSimpleStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_SimpleStudyPlan> SimpleStudyPlan;
	struct SimpleStudyPlan { typedef Iterator<t::CSimpleStudyPlanType> iterator; };
	MemberElement<t::CStabilityStudyPlanType, _altova_mi_t_altova_CStatisticalStudyPlansType_altova_StabilityStudyPlan> StabilityStudyPlan;
	struct StabilityStudyPlan { typedef Iterator<t::CStabilityStudyPlanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatisticalStudyPlansType
