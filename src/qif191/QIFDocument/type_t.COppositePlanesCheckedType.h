#pragma once



namespace qif191
{

namespace t
{	

class COppositePlanesCheckedType : public TypeBase
{
public:
	QIF191_EXPORT COppositePlanesCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COppositePlanesCheckedType(COppositePlanesCheckedType const& init);
	void operator=(COppositePlanesCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COppositePlanesCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_COppositePlanesCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::COppositePlanesConstructionMethodType, _altova_mi_t_altova_COppositePlanesCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::COppositePlanesConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COppositePlanesCheckedType
