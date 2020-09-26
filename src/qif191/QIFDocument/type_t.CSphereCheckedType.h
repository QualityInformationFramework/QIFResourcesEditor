#pragma once



namespace qif191
{

namespace t
{	

class CSphereCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CSphereCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphereCheckedType(CSphereCheckedType const& init);
	void operator=(CSphereCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphereCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CSphereCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CSphereConstructionMethodType, _altova_mi_t_altova_CSphereCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CSphereConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphereCheckedType
