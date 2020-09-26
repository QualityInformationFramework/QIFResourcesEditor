#pragma once



namespace qif191
{

namespace t
{	

class CLineCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CLineCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineCheckedType(CLineCheckedType const& init);
	void operator=(CLineCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CLineCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CLineConstructionMethodType, _altova_mi_t_altova_CLineCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CLineConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineCheckedType
