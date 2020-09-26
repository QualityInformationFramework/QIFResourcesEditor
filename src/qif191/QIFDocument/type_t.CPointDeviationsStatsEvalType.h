#pragma once



namespace qif191
{

namespace t
{	

class CPointDeviationsStatsEvalType : public TypeBase
{
public:
	QIF191_EXPORT CPointDeviationsStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointDeviationsStatsEvalType(CPointDeviationsStatsEvalType const& init);
	void operator=(CPointDeviationsStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointDeviationsStatsEvalType); }
	MemberElement<t::CPointDeviationStatsEvalType, _altova_mi_t_altova_CPointDeviationsStatsEvalType_altova_PointDeviationStats> PointDeviationStats;
	struct PointDeviationStats { typedef Iterator<t::CPointDeviationStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointDeviationsStatsEvalType
