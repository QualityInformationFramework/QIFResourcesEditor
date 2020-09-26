#pragma once



namespace qif191
{

namespace t
{	

class CTorusCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CTorusCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusCheckedType(CTorusCheckedType const& init);
	void operator=(CTorusCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CTorusCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CTorusConstructionMethodType, _altova_mi_t_altova_CTorusCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CTorusConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusCheckedType
