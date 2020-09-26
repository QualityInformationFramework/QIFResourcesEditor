#pragma once



namespace qif191
{

namespace t
{	

class CCuboidActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CCuboidActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCuboidActualDeterminationType(CCuboidActualDeterminationType const& init);
	void operator=(CCuboidActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCuboidActualDeterminationType); }
	MemberElement<t::CCuboidCheckedFeatureType, _altova_mi_t_altova_CCuboidActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CCuboidCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CCuboidActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCuboidActualDeterminationType
