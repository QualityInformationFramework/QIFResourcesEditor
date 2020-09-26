#pragma once



namespace qif191
{

namespace t
{	

class CSphericalSegmentCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CSphericalSegmentCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphericalSegmentCheckedFeatureType(CSphericalSegmentCheckedFeatureType const& init);
	void operator=(CSphericalSegmentCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphericalSegmentCheckedFeatureType); }
	MemberElement<t::CSphericalSegmentCheckedType, _altova_mi_t_altova_CSphericalSegmentCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CSphericalSegmentCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphericalSegmentCheckedFeatureType
