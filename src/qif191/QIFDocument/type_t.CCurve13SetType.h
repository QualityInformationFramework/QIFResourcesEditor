#pragma once



namespace qif191
{

namespace t
{	

class CCurve13SetType : public TypeBase
{
public:
	QIF191_EXPORT CCurve13SetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve13SetType(CCurve13SetType const& init);
	void operator=(CCurve13SetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve13SetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCurve13SetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CCurve13BaseType, _altova_mi_t_altova_CCurve13SetType_altova_Curve13> Curve13;
	struct Curve13 { typedef Iterator<t::CCurve13BaseType> iterator; };
	MemberElement<t::CAggregate13Type, _altova_mi_t_altova_CCurve13SetType_altova_Aggregate13> Aggregate13;
	struct Aggregate13 { typedef Iterator<t::CAggregate13Type> iterator; };
	MemberElement<t::CArcCircular13Type, _altova_mi_t_altova_CCurve13SetType_altova_ArcCircular13> ArcCircular13;
	struct ArcCircular13 { typedef Iterator<t::CArcCircular13Type> iterator; };
	MemberElement<t::CArcConic13Type, _altova_mi_t_altova_CCurve13SetType_altova_ArcConic13> ArcConic13;
	struct ArcConic13 { typedef Iterator<t::CArcConic13Type> iterator; };
	MemberElement<t::CNurbs13Type, _altova_mi_t_altova_CCurve13SetType_altova_Nurbs13> Nurbs13;
	struct Nurbs13 { typedef Iterator<t::CNurbs13Type> iterator; };
	MemberElement<t::CPolyline13Type, _altova_mi_t_altova_CCurve13SetType_altova_Polyline13> Polyline13;
	struct Polyline13 { typedef Iterator<t::CPolyline13Type> iterator; };
	MemberElement<t::CSegment13Type, _altova_mi_t_altova_CCurve13SetType_altova_Segment13> Segment13;
	struct Segment13 { typedef Iterator<t::CSegment13Type> iterator; };
	MemberElement<t::CSpline13Type, _altova_mi_t_altova_CCurve13SetType_altova_Spline13> Spline13;
	struct Spline13 { typedef Iterator<t::CSpline13Type> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve13SetType
