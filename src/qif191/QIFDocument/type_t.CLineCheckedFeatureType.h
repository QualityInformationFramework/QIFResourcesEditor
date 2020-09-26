#pragma once



namespace qif191
{

namespace t
{	

class CLineCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CLineCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineCheckedFeatureType(CLineCheckedFeatureType const& init);
	void operator=(CLineCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineCheckedFeatureType); }
	MemberElement<t::CLineCheckedType, _altova_mi_t_altova_CLineCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CLineCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineCheckedFeatureType
