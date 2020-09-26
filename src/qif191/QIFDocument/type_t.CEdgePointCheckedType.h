#pragma once



namespace qif191
{

namespace t
{	

class CEdgePointCheckedType : public TypeBase
{
public:
	QIF191_EXPORT CEdgePointCheckedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgePointCheckedType(CEdgePointCheckedType const& init);
	void operator=(CEdgePointCheckedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgePointCheckedType); }
	MemberElement<t::CMeasuredFeatureType, _altova_mi_t_altova_CEdgePointCheckedType_altova_Measured> Measured;
	struct Measured { typedef Iterator<t::CMeasuredFeatureType> iterator; };
	MemberElement<t::CEdgePointConstructionMethodType, _altova_mi_t_altova_CEdgePointCheckedType_altova_Constructed> Constructed;
	struct Constructed { typedef Iterator<t::CEdgePointConstructionMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgePointCheckedType
