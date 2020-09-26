#pragma once



namespace qif191
{

namespace t
{	

class CSummaryStatsValuesType : public TypeBase
{
public:
	QIF191_EXPORT CSummaryStatsValuesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatsValuesType(CSummaryStatsValuesType const& init);
	void operator=(CSummaryStatsValuesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatsValuesType); }
	MemberElement<t::CSummaryStatsValuesEnumTypeType, _altova_mi_t_altova_CSummaryStatsValuesType_altova_SummaryType> SummaryType;
	struct SummaryType { typedef Iterator<t::CSummaryStatsValuesEnumTypeType> iterator; };
	MemberElement<t::CListSummaryStatsValuesTypeType, _altova_mi_t_altova_CSummaryStatsValuesType_altova_SummaryStats> SummaryStats;
	struct SummaryStats { typedef Iterator<t::CListSummaryStatsValuesTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatsValuesType
