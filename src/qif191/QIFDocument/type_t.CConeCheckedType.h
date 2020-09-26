#pragma once



namespace qif191
{

namespace t
{	

class CConeCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CConeCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConeCheckedType(CConeCheckedType const& init);
	void operator=(CConeCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConeCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CConeCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CConeConstructionMethodType, _altova_mi_t_altova_CConeCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CConeConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConeCheckedType
