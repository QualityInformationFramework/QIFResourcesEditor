#pragma once



namespace qif191
{

namespace t
{	

class COppositePlanesCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT COppositePlanesCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesCheckedFeatureType(COppositePlanesCheckedFeatureType const& init);
	void operator=(COppositePlanesCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesCheckedFeatureType); }
	MemberElement<t::COppositePlanesCheckedType, _altova_mi_t_altova_COppositePlanesCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::COppositePlanesCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesCheckedFeatureType
