#pragma once



namespace qif191
{

namespace t
{	

class CEllipseActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CEllipseActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEllipseActualDeterminationType(CEllipseActualDeterminationType const& init);
	void operator=(CEllipseActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEllipseActualDeterminationType); }
	MemberElement<t::CEllipseCheckedFeatureType, _altova_mi_t_altova_CEllipseActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CEllipseCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CEllipseActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEllipseActualDeterminationType
