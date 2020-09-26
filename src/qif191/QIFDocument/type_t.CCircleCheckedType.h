#pragma once



namespace qif191
{

namespace t
{	

class CCircleCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CCircleCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCircleCheckedType(CCircleCheckedType const& init);
	void operator=(CCircleCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCircleCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CCircleCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CCircleConstructionMethodType, _altova_mi_t_altova_CCircleCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CCircleConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCircleCheckedType
