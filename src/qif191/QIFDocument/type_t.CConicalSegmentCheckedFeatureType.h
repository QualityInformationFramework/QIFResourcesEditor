#pragma once



namespace qif191
{

namespace t
{	

class CConicalSegmentCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CConicalSegmentCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConicalSegmentCheckedFeatureType(CConicalSegmentCheckedFeatureType const& init);
	void operator=(CConicalSegmentCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConicalSegmentCheckedFeatureType); }
	MemberElement<t::CConicalSegmentCheckedType, _altova_mi_t_altova_CConicalSegmentCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CConicalSegmentCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConicalSegmentCheckedFeatureType
