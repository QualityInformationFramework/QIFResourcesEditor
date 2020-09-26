#pragma once



namespace qif191
{

namespace t
{	

class CCurve13CoreType : public TypeBase
{
public:
	QIF191_EXPORT CCurve13CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve13CoreType(CCurve13CoreType const& init);
	void operator=(CCurve13CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve13CoreType); }
	MemberElement<t::CCurveCoreBaseType, _altova_mi_t_altova_CCurve13CoreType_altova_Curve13Core> Curve13Core;
	struct Curve13Core { typedef Iterator<t::CCurveCoreBaseType> iterator; };
	MemberElement<t::CAggregate13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_Aggregate13Core> Aggregate13Core;
	struct Aggregate13Core { typedef Iterator<t::CAggregate13CoreType> iterator; };
	MemberElement<t::CArcCircular13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_ArcCircular13Core> ArcCircular13Core;
	struct ArcCircular13Core { typedef Iterator<t::CArcCircular13CoreType> iterator; };
	MemberElement<t::CArcConic13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_ArcConic13Core> ArcConic13Core;
	struct ArcConic13Core { typedef Iterator<t::CArcConic13CoreType> iterator; };
	MemberElement<t::CNurbs13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_Nurbs13Core> Nurbs13Core;
	struct Nurbs13Core { typedef Iterator<t::CNurbs13CoreType> iterator; };
	MemberElement<t::CPolyline13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_Polyline13Core> Polyline13Core;
	struct Polyline13Core { typedef Iterator<t::CPolyline13CoreType> iterator; };
	MemberElement<t::CSegment13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_Segment13Core> Segment13Core;
	struct Segment13Core { typedef Iterator<t::CSegment13CoreType> iterator; };
	MemberElement<t::CSpline13CoreType, _altova_mi_t_altova_CCurve13CoreType_altova_Spline13Core> Spline13Core;
	struct Spline13Core { typedef Iterator<t::CSpline13CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve13CoreType
