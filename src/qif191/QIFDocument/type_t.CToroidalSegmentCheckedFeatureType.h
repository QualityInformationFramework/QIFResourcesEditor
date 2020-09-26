#pragma once



namespace qif191
{

namespace t
{	

class CToroidalSegmentCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CToroidalSegmentCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToroidalSegmentCheckedFeatureType(CToroidalSegmentCheckedFeatureType const& init);
	void operator=(CToroidalSegmentCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToroidalSegmentCheckedFeatureType); }
	MemberElement<t::CToroidalSegmentCheckedType, _altova_mi_t_altova_CToroidalSegmentCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CToroidalSegmentCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToroidalSegmentCheckedFeatureType
