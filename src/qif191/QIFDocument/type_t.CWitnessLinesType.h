#pragma once



namespace qif191
{

namespace t
{	

class CWitnessLinesType : public TypeBase
{
public:
	QIF191_EXPORT CWitnessLinesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CWitnessLinesType(CWitnessLinesType const& init);
	void operator=(CWitnessLinesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CWitnessLinesType); }

	MemberAttribute<double,_altova_mi_t_altova_CWitnessLinesType_altova_Width, 0, 0> Width;	// Width Cdouble
	MemberElement<t::CLineSegment2dType, _altova_mi_t_altova_CWitnessLinesType_altova_Segment1> Segment1;
	struct Segment1 { typedef Iterator<t::CLineSegment2dType> iterator; };
	MemberElement<t::CLineSegment2dType, _altova_mi_t_altova_CWitnessLinesType_altova_Segment2> Segment2;
	struct Segment2 { typedef Iterator<t::CLineSegment2dType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CWitnessLinesType
