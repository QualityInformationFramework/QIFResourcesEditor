#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionCheckedFeatureType(CExtrudedCrossSectionCheckedFeatureType const& init);
	void operator=(CExtrudedCrossSectionCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionCheckedFeatureType); }
	MemberElement<t::CExtrudedCrossSectionCheckedType, _altova_mi_t_altova_CExtrudedCrossSectionCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CExtrudedCrossSectionCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionCheckedFeatureType
