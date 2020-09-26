#pragma once



namespace qif191
{

namespace t
{	

class CElongatedCylinderActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CElongatedCylinderActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CElongatedCylinderActualDeterminationType(CElongatedCylinderActualDeterminationType const& init);
	void operator=(CElongatedCylinderActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CElongatedCylinderActualDeterminationType); }
	MemberElement<t::CElongatedCylinderCheckedFeatureType, _altova_mi_t_altova_CElongatedCylinderActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CElongatedCylinderCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CElongatedCylinderActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CElongatedCylinderActualDeterminationType
