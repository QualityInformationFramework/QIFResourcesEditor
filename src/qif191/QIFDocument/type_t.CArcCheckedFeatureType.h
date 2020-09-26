#pragma once



namespace qif191
{

namespace t
{	

class CArcCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CArcCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcCheckedFeatureType(CArcCheckedFeatureType const& init);
	void operator=(CArcCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcCheckedFeatureType); }
	MemberElement<t::CArcCheckedType, _altova_mi_t_altova_CArcCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CArcCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcCheckedFeatureType
