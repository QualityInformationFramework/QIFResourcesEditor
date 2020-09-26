#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentsPositionStatsEvalType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentsPositionStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentsPositionStatsEvalType(CCompositeSegmentsPositionStatsEvalType const& init);
	void operator=(CCompositeSegmentsPositionStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentsPositionStatsEvalType); }
	MemberElement<t::CCompositeSegmentPositionStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsPositionStatsEvalType_altova_SecondCompositeSegmentPositionStats> SecondCompositeSegmentPositionStats;
	struct SecondCompositeSegmentPositionStats { typedef Iterator<t::CCompositeSegmentPositionStatsEvalType> iterator; };
	MemberElement<t::CCompositeSegmentPositionStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsPositionStatsEvalType_altova_ThirdCompositeSegmentPositionStats> ThirdCompositeSegmentPositionStats;
	struct ThirdCompositeSegmentPositionStats { typedef Iterator<t::CCompositeSegmentPositionStatsEvalType> iterator; };
	MemberElement<t::CCompositeSegmentPositionStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsPositionStatsEvalType_altova_FourthCompositeSegmentPositionStats> FourthCompositeSegmentPositionStats;
	struct FourthCompositeSegmentPositionStats { typedef Iterator<t::CCompositeSegmentPositionStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentsPositionStatsEvalType
