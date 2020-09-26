#pragma once



namespace qif191
{

namespace t
{	

class CStatisticsType : public TypeBase
{
public:
	QIF191_EXPORT CStatisticsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatisticsType(CStatisticsType const& init);
	void operator=(CStatisticsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStatisticsType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CStatisticsType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	MemberElement<t::CStatisticalStudyPlansType, _altova_mi_t_altova_CStatisticsType_altova_StatisticalStudyPlans> StatisticalStudyPlans;
	struct StatisticalStudyPlans { typedef Iterator<t::CStatisticalStudyPlansType> iterator; };
	MemberElement<t::CStatisticalStudiesResultsType, _altova_mi_t_altova_CStatisticsType_altova_StatisticalStudiesResults> StatisticalStudiesResults;
	struct StatisticalStudiesResults { typedef Iterator<t::CStatisticalStudiesResultsType> iterator; };
	MemberElement<t::CCorrectiveActionPlansType, _altova_mi_t_altova_CStatisticsType_altova_CorrectiveActionPlans> CorrectiveActionPlans;
	struct CorrectiveActionPlans { typedef Iterator<t::CCorrectiveActionPlansType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatisticsType
