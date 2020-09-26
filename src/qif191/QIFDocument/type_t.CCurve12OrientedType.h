#pragma once



namespace qif191
{

namespace t
{	

class CCurve12OrientedType : public TypeBase
{
public:
	QIF191_EXPORT CCurve12OrientedType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurve12OrientedType(CCurve12OrientedType const& init);
	void operator=(CCurve12OrientedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCurve12OrientedType); }

	MemberAttribute<bool,_altova_mi_t_altova_CCurve12OrientedType_altova_Turned, 0, 0> Turned;	// Turned Cboolean
	MemberElement<t::CCurveCoreBaseType, _altova_mi_t_altova_CCurve12OrientedType_altova_Curve12Core> Curve12Core;
	struct Curve12Core { typedef Iterator<t::CCurveCoreBaseType> iterator; };
	MemberElement<t::CAggregate12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_Aggregate12Core> Aggregate12Core;
	struct Aggregate12Core { typedef Iterator<t::CAggregate12CoreType> iterator; };
	MemberElement<t::CArcCircular12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_ArcCircular12Core> ArcCircular12Core;
	struct ArcCircular12Core { typedef Iterator<t::CArcCircular12CoreType> iterator; };
	MemberElement<t::CArcConic12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_ArcConic12Core> ArcConic12Core;
	struct ArcConic12Core { typedef Iterator<t::CArcConic12CoreType> iterator; };
	MemberElement<t::CNurbs12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_Nurbs12Core> Nurbs12Core;
	struct Nurbs12Core { typedef Iterator<t::CNurbs12CoreType> iterator; };
	MemberElement<t::CPolyline12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_Polyline12Core> Polyline12Core;
	struct Polyline12Core { typedef Iterator<t::CPolyline12CoreType> iterator; };
	MemberElement<t::CSegment12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_Segment12Core> Segment12Core;
	struct Segment12Core { typedef Iterator<t::CSegment12CoreType> iterator; };
	MemberElement<t::CSpline12CoreType, _altova_mi_t_altova_CCurve12OrientedType_altova_Spline12Core> Spline12Core;
	struct Spline12Core { typedef Iterator<t::CSpline12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurve12OrientedType
