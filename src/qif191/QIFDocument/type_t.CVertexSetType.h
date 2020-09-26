#pragma once



namespace qif191
{

namespace t
{	

class CVertexSetType : public TypeBase
{
public:
	QIF191_EXPORT CVertexSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVertexSetType(CVertexSetType const& init);
	void operator=(CVertexSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVertexSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CVertexSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CVertexType, _altova_mi_t_altova_CVertexSetType_altova_Vertex> Vertex;
	struct Vertex { typedef Iterator<t::CVertexType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVertexSetType
