#pragma once



namespace qif191
{

namespace t
{	

class CPointDeviationStatsEvalType : public TypeBase
{
public:
	QIF191_EXPORT CPointDeviationStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDeviationStatsEvalType(CPointDeviationStatsEvalType const& init);
	void operator=(CPointDeviationStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDeviationStatsEvalType); }
	MemberElement<t::CStatsArrayIdType, _altova_mi_t_altova_CPointDeviationStatsEvalType_altova_MeasurePointActualIds> MeasurePointActualIds;
	struct MeasurePointActualIds { typedef Iterator<t::CStatsArrayIdType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CPointDeviationStatsEvalType_altova_DeviationStats> DeviationStats;
	struct DeviationStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDeviationStatsEvalType
