#pragma once



namespace qif191
{

namespace t
{	

class CEdgePointCheckedFeatureType : public TypeBase
{
public:
	QIF191_EXPORT CEdgePointCheckedFeatureType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointCheckedFeatureType(CEdgePointCheckedFeatureType const& init);
	void operator=(CEdgePointCheckedFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointCheckedFeatureType); }
	MemberElement<t::CEdgePointCheckedType, _altova_mi_t_altova_CEdgePointCheckedFeatureType_altova_CheckDetails> CheckDetails;
	struct CheckDetails { typedef Iterator<t::CEdgePointCheckedType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointCheckedFeatureType
