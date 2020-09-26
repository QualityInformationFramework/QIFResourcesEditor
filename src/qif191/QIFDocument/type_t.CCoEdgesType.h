#pragma once



namespace qif191
{

namespace t
{	

class CCoEdgesType : public TypeBase
{
public:
	QIF191_EXPORT CCoEdgesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoEdgesType(CCoEdgesType const& init);
	void operator=(CCoEdgesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoEdgesType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCoEdgesType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CCoEdgeType, _altova_mi_t_altova_CCoEdgesType_altova_CoEdge> CoEdge;
	struct CoEdge { typedef Iterator<t::CCoEdgeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoEdgesType
