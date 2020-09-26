#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentsProfileStatsEvalType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentsProfileStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentsProfileStatsEvalType(CCompositeSegmentsProfileStatsEvalType const& init);
	void operator=(CCompositeSegmentsProfileStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentsProfileStatsEvalType); }
	MemberElement<t::CCompositeSegmentProfileStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsProfileStatsEvalType_altova_SecondCompositeSegmentProfileStats> SecondCompositeSegmentProfileStats;
	struct SecondCompositeSegmentProfileStats { typedef Iterator<t::CCompositeSegmentProfileStatsEvalType> iterator; };
	MemberElement<t::CCompositeSegmentProfileStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsProfileStatsEvalType_altova_ThirdCompositeSegmentProfileStats> ThirdCompositeSegmentProfileStats;
	struct ThirdCompositeSegmentProfileStats { typedef Iterator<t::CCompositeSegmentProfileStatsEvalType> iterator; };
	MemberElement<t::CCompositeSegmentProfileStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsProfileStatsEvalType_altova_FourthCompositeSegmentProfileStats> FourthCompositeSegmentProfileStats;
	struct FourthCompositeSegmentProfileStats { typedef Iterator<t::CCompositeSegmentProfileStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentsProfileStatsEvalType
