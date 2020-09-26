#pragma once



namespace qif191
{

namespace t
{	

class CPointActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CPointActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointActualDeterminationType(CPointActualDeterminationType const& init);
	void operator=(CPointActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPointActualDeterminationType); }
	MemberElement<t::CPointCheckedFeatureType, _altova_mi_t_altova_CPointActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CPointCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CPointActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointActualDeterminationType
