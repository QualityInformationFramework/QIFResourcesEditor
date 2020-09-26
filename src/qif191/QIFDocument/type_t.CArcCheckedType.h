#pragma once



namespace qif191
{

namespace t
{	

class CArcCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CArcCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcCheckedType(CArcCheckedType const& init);
	void operator=(CArcCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CArcCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CArcConstructionMethodType, _altova_mi_t_altova_CArcCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CArcConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcCheckedType
