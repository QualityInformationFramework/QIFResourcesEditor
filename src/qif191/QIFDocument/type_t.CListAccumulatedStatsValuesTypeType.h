#pragma once



namespace qif191
{

namespace t
{	

class CListAccumulatedStatsValuesTypeType : public TypeBase
{
public:
	QIF191_EXPORT CListAccumulatedStatsValuesTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CListAccumulatedStatsValuesTypeType(CListAccumulatedStatsValuesTypeType const& init);
	void operator=(CListAccumulatedStatsValuesTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CListAccumulatedStatsValuesTypeType); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CListAccumulatedStatsValuesTypeType
