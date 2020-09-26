#pragma once



namespace qif191
{

namespace t
{	

class CTorusActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CTorusActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorusActualDeterminationType(CTorusActualDeterminationType const& init);
	void operator=(CTorusActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorusActualDeterminationType); }
	MemberElement<t::CTorusCheckedFeatureType, _altova_mi_t_altova_CTorusActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CTorusCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CTorusActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorusActualDeterminationType
