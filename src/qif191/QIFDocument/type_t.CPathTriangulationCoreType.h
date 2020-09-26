#pragma once



namespace qif191
{

namespace t
{	

class CPathTriangulationCoreType : public TypeBase
{
public:
	QIF191_EXPORT CPathTriangulationCoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPathTriangulationCoreType(CPathTriangulationCoreType const& init);
	void operator=(CPathTriangulationCoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPathTriangulationCoreType); }
	MemberElement<t::CArrayI2Type, _altova_mi_t_altova_CPathTriangulationCoreType_altova_Edges> Edges;
	struct Edges { typedef Iterator<t::CArrayI2Type> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CPathTriangulationCoreType_altova_EdgesBinary> EdgesBinary;
	struct EdgesBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPathTriangulationCoreType
