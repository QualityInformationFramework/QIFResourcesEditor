#pragma once



namespace qif191
{

namespace t
{	

class CEdgePointActualDeterminationType : public TypeBase
{
public:
	QIF191_EXPORT CEdgePointActualDeterminationType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointActualDeterminationType(CEdgePointActualDeterminationType const& init);
	void operator=(CEdgePointActualDeterminationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointActualDeterminationType); }
	MemberElement<t::CEdgePointCheckedFeatureType, _altova_mi_t_altova_CEdgePointActualDeterminationType_altova_Checked> Checked;
	struct Checked { typedef Iterator<t::CEdgePointCheckedFeatureType> iterator; };
	MemberElement<t::CSetFeatureType, _altova_mi_t_altova_CEdgePointActualDeterminationType_altova_Set> Set;
	struct Set { typedef Iterator<t::CSetFeatureType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointActualDeterminationType
