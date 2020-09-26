#pragma once



namespace qif191
{

namespace t
{	

class CConeCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CConeCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConeCheckedFeatureType(CConeCheckedFeatureType const& init);
	void operator=(CConeCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConeCheckedFeatureType); }
	MemberElement<t::CConeCheckedType, _altova_mi_t_altova_CConeCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CConeCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConeCheckedFeatureType
