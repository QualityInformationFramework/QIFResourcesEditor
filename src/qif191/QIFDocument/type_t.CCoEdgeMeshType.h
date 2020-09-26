#pragma once



namespace qif191
{

namespace t
{	

class CCoEdgeMeshType : public TypeBase
{
public:
	QIF191_EXPORT CCoEdgeMeshType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCoEdgeMeshType(CCoEdgeMeshType const& init);
	void operator=(CCoEdgeMeshType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCoEdgeMeshType); }
	MemberElement<t::CEdgeOrientedType, _altova_mi_t_altova_CCoEdgeMeshType_altova_EdgeOriented> EdgeOriented;
	struct EdgeOriented { typedef Iterator<t::CEdgeOrientedType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CCoEdgeMeshType_altova_CurveMesh> CurveMesh;
	struct CurveMesh { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCoEdgeMeshType
