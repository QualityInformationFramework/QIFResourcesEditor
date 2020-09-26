#pragma once



namespace qif191
{

namespace t
{	

class COppositeLinesCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT COppositeLinesCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesCheckedFeatureType(COppositeLinesCheckedFeatureType const& init);
	void operator=(COppositeLinesCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesCheckedFeatureType); }
	MemberElement<t::COppositeLinesCheckedType, _altova_mi_t_altova_COppositeLinesCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::COppositeLinesCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesCheckedFeatureType
