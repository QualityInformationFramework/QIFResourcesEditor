#pragma once



namespace qif191
{

namespace t
{	

class CCylindricalSegmentActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CCylindricalSegmentActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylindricalSegmentActualDeterminationType(CCylindricalSegmentActualDeterminationType const& init);
	void operator=(CCylindricalSegmentActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylindricalSegmentActualDeterminationType); }
	MemberElement<t::CCylindricalSegmentCheckedFeatureType, _altova_mi_t_altova_CCylindricalSegmentActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CCylindricalSegmentCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CCylindricalSegmentActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylindricalSegmentActualDeterminationType
