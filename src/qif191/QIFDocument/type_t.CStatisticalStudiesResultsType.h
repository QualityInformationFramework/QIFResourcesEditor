#pragma once



namespace qif191
{

namespace t
{	

class CStatisticalStudiesResultsType : public TypeBase
{
public:
	QIF191_EXPORT CStatisticalStudiesResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatisticalStudiesResultsType(CStatisticalStudiesResultsType const& init);
	void operator=(CStatisticalStudiesResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatisticalStudiesResultsType); }
	MemberElement<t::CStatisticalStudyResultsBaseType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_StatisticalStudyResults> StatisticalStudyResults;
	struct StatisticalStudyResults { typedef Iterator<t::CStatisticalStudyResultsBaseType> iterator; };
	MemberElement<t::CBiasStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_BiasStudyResults> BiasStudyResults;
	struct BiasStudyResults { typedef Iterator<t::CBiasStudyResultsType> iterator; };
	MemberElement<t::CCapabilityStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_CapabilityStudyResults> CapabilityStudyResults;
	struct CapabilityStudyResults { typedef Iterator<t::CCapabilityStudyResultsType> iterator; };
	MemberElement<t::CFirstArticleStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_FirstArticleStudyResults> FirstArticleStudyResults;
	struct FirstArticleStudyResults { typedef Iterator<t::CFirstArticleStudyResultsType> iterator; };
	MemberElement<t::CGageRandRStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_GageRandRStudyResults> GageRandRStudyResults;
	struct GageRandRStudyResults { typedef Iterator<t::CGageRandRStudyResultsType> iterator; };
	MemberElement<t::CLinearityStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_LinearityStudyResults> LinearityStudyResults;
	struct LinearityStudyResults { typedef Iterator<t::CLinearityStudyResultsType> iterator; };
	MemberElement<t::CProcessDifferenceStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_ProcessDifferenceStudyResults> ProcessDifferenceStudyResults;
	struct ProcessDifferenceStudyResults { typedef Iterator<t::CProcessDifferenceStudyResultsType> iterator; };
	MemberElement<t::CProductionStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_ProductionStudyResults> ProductionStudyResults;
	struct ProductionStudyResults { typedef Iterator<t::CProductionStudyResultsType> iterator; };
	MemberElement<t::CSimpleStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_SimpleStudyResults> SimpleStudyResults;
	struct SimpleStudyResults { typedef Iterator<t::CSimpleStudyResultsType> iterator; };
	MemberElement<t::CStabilityStudyResultsType, _altova_mi_t_altova_CStatisticalStudiesResultsType_altova_StabilityStudyResults> StabilityStudyResults;
	struct StabilityStudyResults { typedef Iterator<t::CStabilityStudyResultsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatisticalStudiesResultsType
