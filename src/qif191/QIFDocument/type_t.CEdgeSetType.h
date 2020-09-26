#pragma once



namespace qif191
{

namespace t
{	

class CEdgeSetType : public TypeBase
{
public:
	QIF191_EXPORT CEdgeSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgeSetType(CEdgeSetType const& init);
	void operator=(CEdgeSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgeSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CEdgeSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CEdgeType, _altova_mi_t_altova_CEdgeSetType_altova_Edge> Edge;
	struct Edge { typedef Iterator<t::CEdgeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgeSetType
