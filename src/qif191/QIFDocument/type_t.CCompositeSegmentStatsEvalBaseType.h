#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentStatsEvalBaseType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentStatsEvalBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentStatsEvalBaseType(CCompositeSegmentStatsEvalBaseType const& init);
	void operator=(CCompositeSegmentStatsEvalBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentStatsEvalBaseType); }
	MemberElement<t::CStatsWithTolLinearType, _altova_mi_t_altova_CCompositeSegmentStatsEvalBaseType_altova_ValueStats> ValueStats;
	struct ValueStats { typedef Iterator<t::CStatsWithTolLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CCompositeSegmentStatsEvalBaseType_altova_MaxValueStats> MaxValueStats;
	struct MaxValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	MemberElement<t::CStatsLinearType, _altova_mi_t_altova_CCompositeSegmentStatsEvalBaseType_altova_MinValueStats> MinValueStats;
	struct MinValueStats { typedef Iterator<t::CStatsLinearType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentStatsEvalBaseType
