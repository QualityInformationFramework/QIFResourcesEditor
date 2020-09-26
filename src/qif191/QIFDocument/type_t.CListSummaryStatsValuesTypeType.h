#pragma once



namespace qif191
{

namespace t
{	

class CListSummaryStatsValuesTypeType : public TypeBase
{
public:
	QIF191_EXPORT CListSummaryStatsValuesTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CListSummaryStatsValuesTypeType(CListSummaryStatsValuesTypeType const& init);
	void operator=(CListSummaryStatsValuesTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CListSummaryStatsValuesTypeType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CListSummaryStatsValuesTypeType
