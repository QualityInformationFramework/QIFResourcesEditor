#pragma once



namespace qif191
{

namespace t
{	

class CCircleCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CCircleCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleCheckedFeatureType(CCircleCheckedFeatureType const& init);
	void operator=(CCircleCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleCheckedFeatureType); }
	MemberElement<t::CCircleCheckedType, _altova_mi_t_altova_CCircleCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CCircleCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleCheckedFeatureType
