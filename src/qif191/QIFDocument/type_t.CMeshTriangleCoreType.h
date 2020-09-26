#pragma once



namespace qif191
{

namespace t
{	

class CMeshTriangleCoreType : public TypeBase
{
public:
	QIF191_EXPORT CMeshTriangleCoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeshTriangleCoreType(CMeshTriangleCoreType const& init);
	void operator=(CMeshTriangleCoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeshTriangleCoreType); }
	MemberElement<t::CArrayI3Type, _altova_mi_t_altova_CMeshTriangleCoreType_altova_Triangles> Triangles;
	struct Triangles { typedef Iterator<t::CArrayI3Type> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_TrianglesBinary> TrianglesBinary;
	struct TrianglesBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayI3Type, _altova_mi_t_altova_CMeshTriangleCoreType_altova_Neighbours> Neighbours;
	struct Neighbours { typedef Iterator<t::CArrayI3Type> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_NeighboursBinary> NeighboursBinary;
	struct NeighboursBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayPointType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_Vertices> Vertices;
	struct Vertices { typedef Iterator<t::CArrayPointType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_VerticesBinary> VerticesBinary;
	struct VerticesBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	MemberElement<t::CArrayUnitVectorType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_Normals> Normals;
	struct Normals { typedef Iterator<t::CArrayUnitVectorType> iterator; };
	MemberElement<t::CArrayBinaryType, _altova_mi_t_altova_CMeshTriangleCoreType_altova_NormalsBinary> NormalsBinary;
	struct NormalsBinary { typedef Iterator<t::CArrayBinaryType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeshTriangleCoreType
