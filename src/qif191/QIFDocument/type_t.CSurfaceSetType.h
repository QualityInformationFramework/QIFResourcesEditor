#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceSetType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceSetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceSetType(CSurfaceSetType const& init);
	void operator=(CSurfaceSetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSurfaceSetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CSurfaceSetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CSurfaceBaseType, _altova_mi_t_altova_CSurfaceSetType_altova_Surface> Surface;
	struct Surface { typedef Iterator<t::CSurfaceBaseType> iterator; };
	MemberElement<t::CCone23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Cone23> Cone23;
	struct Cone23 { typedef Iterator<t::CCone23Type> iterator; };
	MemberElement<t::CCylinder23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Cylinder23> Cylinder23;
	struct Cylinder23 { typedef Iterator<t::CCylinder23Type> iterator; };
	MemberElement<t::CExtrude23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Extrude23> Extrude23;
	struct Extrude23 { typedef Iterator<t::CExtrude23Type> iterator; };
	MemberElement<t::CNurbs23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Nurbs23> Nurbs23;
	struct Nurbs23 { typedef Iterator<t::CNurbs23Type> iterator; };
	MemberElement<t::COffset23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Offset23> Offset23;
	struct Offset23 { typedef Iterator<t::COffset23Type> iterator; };
	MemberElement<t::CPlane23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Plane23> Plane23;
	struct Plane23 { typedef Iterator<t::CPlane23Type> iterator; };
	MemberElement<t::CRevolution23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Revolution23> Revolution23;
	struct Revolution23 { typedef Iterator<t::CRevolution23Type> iterator; };
	MemberElement<t::CRuled23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Ruled23> Ruled23;
	struct Ruled23 { typedef Iterator<t::CRuled23Type> iterator; };
	MemberElement<t::CSphere23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Sphere23> Sphere23;
	struct Sphere23 { typedef Iterator<t::CSphere23Type> iterator; };
	MemberElement<t::CSpline23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Spline23> Spline23;
	struct Spline23 { typedef Iterator<t::CSpline23Type> iterator; };
	MemberElement<t::CTorus23Type, _altova_mi_t_altova_CSurfaceSetType_altova_Torus23> Torus23;
	struct Torus23 { typedef Iterator<t::CTorus23Type> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceSetType
