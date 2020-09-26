#pragma once



namespace qif191
{

namespace t
{	

class CCylindricalSegmentCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CCylindricalSegmentCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricalSegmentCheckedFeatureType(CCylindricalSegmentCheckedFeatureType const& init);
	void operator=(CCylindricalSegmentCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricalSegmentCheckedFeatureType); }
	MemberElement<t::CCylindricalSegmentCheckedType, _altova_mi_t_altova_CCylindricalSegmentCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CCylindricalSegmentCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricalSegmentCheckedFeatureType
