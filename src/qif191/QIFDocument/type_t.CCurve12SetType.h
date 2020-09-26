#pragma once



namespace qif191
{

namespace t
{	

class CCurve12SetType : public TypeBase
{
public:
	QIF191_EXPORT CCurve12SetType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve12SetType(CCurve12SetType const& init);
	void operator=(CCurve12SetType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve12SetType); }

	MemberAttribute<unsigned,_altova_mi_t_altova_CCurve12SetType_altova_N, 0, 0> N;	// N CNaturalType
	MemberElement<t::CCurve12BaseType, _altova_mi_t_altova_CCurve12SetType_altova_Curve12> Curve12;
	struct Curve12 { typedef Iterator<t::CCurve12BaseType> iterator; };
	MemberElement<t::CAggregate12Type, _altova_mi_t_altova_CCurve12SetType_altova_Aggregate12> Aggregate12;
	struct Aggregate12 { typedef Iterator<t::CAggregate12Type> iterator; };
	MemberElement<t::CArcCircular12Type, _altova_mi_t_altova_CCurve12SetType_altova_ArcCircular12> ArcCircular12;
	struct ArcCircular12 { typedef Iterator<t::CArcCircular12Type> iterator; };
	MemberElement<t::CArcConic12Type, _altova_mi_t_altova_CCurve12SetType_altova_ArcConic12> ArcConic12;
	struct ArcConic12 { typedef Iterator<t::CArcConic12Type> iterator; };
	MemberElement<t::CNurbs12Type, _altova_mi_t_altova_CCurve12SetType_altova_Nurbs12> Nurbs12;
	struct Nurbs12 { typedef Iterator<t::CNurbs12Type> iterator; };
	MemberElement<t::CPolyline12Type, _altova_mi_t_altova_CCurve12SetType_altova_Polyline12> Polyline12;
	struct Polyline12 { typedef Iterator<t::CPolyline12Type> iterator; };
	MemberElement<t::CSegment12Type, _altova_mi_t_altova_CCurve12SetType_altova_Segment12> Segment12;
	struct Segment12 { typedef Iterator<t::CSegment12Type> iterator; };
	MemberElement<t::CSpline12Type, _altova_mi_t_altova_CCurve12SetType_altova_Spline12> Spline12;
	struct Spline12 { typedef Iterator<t::CSpline12Type> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve12SetType
