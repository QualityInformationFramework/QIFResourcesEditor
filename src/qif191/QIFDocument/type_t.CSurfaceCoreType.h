#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceCoreType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceCoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceCoreType(CSurfaceCoreType const& init);
	void operator=(CSurfaceCoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceCoreType); }
	MemberElement<t::CSurfaceCoreBaseType, _altova_mi_t_altova_CSurfaceCoreType_altova_SurfaceCore> SurfaceCore;
	struct SurfaceCore { typedef Iterator<t::CSurfaceCoreBaseType> iterator; };
	MemberElement<t::CCone23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Cone23Core> Cone23Core;
	struct Cone23Core { typedef Iterator<t::CCone23CoreType> iterator; };
	MemberElement<t::CCylinder23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Cylinder23Core> Cylinder23Core;
	struct Cylinder23Core { typedef Iterator<t::CCylinder23CoreType> iterator; };
	MemberElement<t::CExtrude23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Extrude23Core> Extrude23Core;
	struct Extrude23Core { typedef Iterator<t::CExtrude23CoreType> iterator; };
	MemberElement<t::CNurbs23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Nurbs23Core> Nurbs23Core;
	struct Nurbs23Core { typedef Iterator<t::CNurbs23CoreType> iterator; };
	MemberElement<t::COffset23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Offset23Core> Offset23Core;
	struct Offset23Core { typedef Iterator<t::COffset23CoreType> iterator; };
	MemberElement<t::CPlane23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Plane23Core> Plane23Core;
	struct Plane23Core { typedef Iterator<t::CPlane23CoreType> iterator; };
	MemberElement<t::CRevolution23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Revolution23Core> Revolution23Core;
	struct Revolution23Core { typedef Iterator<t::CRevolution23CoreType> iterator; };
	MemberElement<t::CRuled23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Ruled23Core> Ruled23Core;
	struct Ruled23Core { typedef Iterator<t::CRuled23CoreType> iterator; };
	MemberElement<t::CSphere23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Sphere23Core> Sphere23Core;
	struct Sphere23Core { typedef Iterator<t::CSphere23CoreType> iterator; };
	MemberElement<t::CSpline23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Spline23Core> Spline23Core;
	struct Spline23Core { typedef Iterator<t::CSpline23CoreType> iterator; };
	MemberElement<t::CTorus23CoreType, _altova_mi_t_altova_CSurfaceCoreType_altova_Torus23Core> Torus23Core;
	struct Torus23Core { typedef Iterator<t::CTorus23CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceCoreType
