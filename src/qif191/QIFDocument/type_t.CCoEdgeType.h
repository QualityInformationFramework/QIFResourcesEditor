#pragma once



namespace qif191
{

namespace t
{	

class CCoEdgeType : public TypeBase
{
public:
	QIF191_EXPORT CCoEdgeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoEdgeType(CCoEdgeType const& init);
	void operator=(CCoEdgeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoEdgeType); }
	MemberElement<t::CEdgeOrientedType, _altova_mi_t_altova_CCoEdgeType_altova_EdgeOriented> EdgeOriented;
	struct EdgeOriented { typedef Iterator<t::CEdgeOrientedType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CCoEdgeType_altova_Curve12> Curve12;
	struct Curve12 { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoEdgeType
