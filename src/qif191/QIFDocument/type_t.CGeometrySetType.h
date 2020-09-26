#pragma once



namespace qif191
{

namespace t
{	

class CGeometrySetType : public TypeBase
{
public:
	QIF191_EXPORT CGeometrySetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGeometrySetType(CGeometrySetType const& init);
	void operator=(CGeometrySetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGeometrySetType); }
	MemberElement<t::CPointSetType, _altova_mi_t_altova_CGeometrySetType_altova_PointSet> PointSet;
	struct PointSet { typedef Iterator<t::CPointSetType> iterator; };
	MemberElement<t::CCurve12SetType, _altova_mi_t_altova_CGeometrySetType_altova_Curve12Set> Curve12Set;
	struct Curve12Set { typedef Iterator<t::CCurve12SetType> iterator; };
	MemberElement<t::CCurve13SetType, _altova_mi_t_altova_CGeometrySetType_altova_Curve13Set> Curve13Set;
	struct Curve13Set { typedef Iterator<t::CCurve13SetType> iterator; };
	MemberElement<t::CSurfaceSetType, _altova_mi_t_altova_CGeometrySetType_altova_SurfaceSet> SurfaceSet;
	struct SurfaceSet { typedef Iterator<t::CSurfaceSetType> iterator; };
	MemberElement<t::CCurveMeshSetType, _altova_mi_t_altova_CGeometrySetType_altova_CurveMeshSet> CurveMeshSet;
	struct CurveMeshSet { typedef Iterator<t::CCurveMeshSetType> iterator; };
	MemberElement<t::CSurfaceMeshSetType, _altova_mi_t_altova_CGeometrySetType_altova_SurfaceMeshSet> SurfaceMeshSet;
	struct SurfaceMeshSet { typedef Iterator<t::CSurfaceMeshSetType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGeometrySetType
