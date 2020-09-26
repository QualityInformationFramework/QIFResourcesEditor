#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionActualDeterminationType(CExtrudedCrossSectionActualDeterminationType const& init);
	void operator=(CExtrudedCrossSectionActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionActualDeterminationType); }
	MemberElement<t::CExtrudedCrossSectionCheckedFeatureType, _altova_mi_t_altova_CExtrudedCrossSectionActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CExtrudedCrossSectionCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CExtrudedCrossSectionActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionActualDeterminationType
