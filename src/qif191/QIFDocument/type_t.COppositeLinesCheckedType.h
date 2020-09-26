#pragma once



namespace qif191
{

namespace t
{	

class COppositeLinesCheckedType : public TypeBase
{
public:
	QIF191_EXPORT COppositeLinesCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositeLinesCheckedType(COppositeLinesCheckedType const& init);
	void operator=(COppositeLinesCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositeLinesCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_COppositeLinesCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::COppositeLinesConstructionMethodType, _altova_mi_t_altova_COppositeLinesCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::COppositeLinesConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositeLinesCheckedType
