#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceMeshSetType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceMeshSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceMeshSetType(CSurfaceMeshSetType const& init);
	void operator=(CSurfaceMeshSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceMeshSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CSurfaceMeshSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CMeshTriangleType, _altova_mi_t_altova_CSurfaceMeshSetType_altova_MeshTriangle> MeshTriangle;
	struct MeshTriangle { typedef Iterator<t::CMeshTriangleType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceMeshSetType
