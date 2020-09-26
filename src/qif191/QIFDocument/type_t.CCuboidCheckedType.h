#pragma once



namespace qif191
{

namespace t
{	

class CCuboidCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CCuboidCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidCheckedType(CCuboidCheckedType const& init);
	void operator=(CCuboidCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CCuboidCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CCuboidConstructionMethodType, _altova_mi_t_altova_CCuboidCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CCuboidConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidCheckedType
