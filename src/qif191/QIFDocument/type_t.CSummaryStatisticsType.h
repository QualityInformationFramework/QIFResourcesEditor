#pragma once



namespace qif191
{

namespace t
{	

class CSummaryStatisticsType : public TypeBase
{
public:
	QIF191_EXPORT CSummaryStatisticsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatisticsType(CSummaryStatisticsType const& init);
	void operator=(CSummaryStatisticsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatisticsType); }
	MemberElement<t::CStatsValuesEnumTypeType, _altova_mi_t_altova_CSummaryStatisticsType_altova_SummaryType> SummaryType;
	struct SummaryType { typedef Iterator<t::CStatsValuesEnumTypeType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CSummaryStatisticsType_altova_Average> Average;
	struct Average { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CSummaryStatisticsType_altova_Maximum> Maximum;
	struct Maximum { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CSummaryStatisticsType_altova_Minimum> Minimum;
	struct Minimum { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CSummaryStatisticsType_altova_Range> Range;
	struct Range { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CSummaryStatisticsType_altova_StandardDeviation> StandardDeviation;
	struct StandardDeviation { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatisticsType
