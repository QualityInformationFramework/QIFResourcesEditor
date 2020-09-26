#pragma once



namespace qif191
{

namespace t
{	

class CCompositeSegmentsSymmetryStatsEvalType : public TypeBase
{
public:
	QIF191_EXPORT CCompositeSegmentsSymmetryStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentsSymmetryStatsEvalType(CCompositeSegmentsSymmetryStatsEvalType const& init);
	void operator=(CCompositeSegmentsSymmetryStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentsSymmetryStatsEvalType); }
	MemberElement<t::CCompositeSegmentSymmetryStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsSymmetryStatsEvalType_altova_SecondCompositeSegmentSymmetryStats> SecondCompositeSegmentSymmetryStats;
	struct SecondCompositeSegmentSymmetryStats { typedef Iterator<t::CCompositeSegmentSymmetryStatsEvalType> iterator; };
	MemberElement<t::CCompositeSegmentSymmetryStatsEvalType, _altova_mi_t_altova_CCompositeSegmentsSymmetryStatsEvalType_altova_ThirdCompositeSegmentSymmetryStats> ThirdCompositeSegmentSymmetryStats;
	struct ThirdCompositeSegmentSymmetryStats { typedef Iterator<t::CCompositeSegmentSymmetryStatsEvalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentsSymmetryStatsEvalType
