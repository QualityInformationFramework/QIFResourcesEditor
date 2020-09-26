#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionCheckedType(CExtrudedCrossSectionCheckedType const& init);
	void operator=(CExtrudedCrossSectionCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CExtrudedCrossSectionCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CExtrudedCrossSectionConstructionMethodType, _altova_mi_t_altova_CExtrudedCrossSectionCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CExtrudedCrossSectionConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionCheckedType
