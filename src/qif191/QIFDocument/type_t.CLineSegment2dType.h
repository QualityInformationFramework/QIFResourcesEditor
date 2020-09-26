#pragma once



namespace qif191
{

namespace t
{	

class CLineSegment2dType : public TypeBase
{
public:
	QIF191_EXPORT CLineSegment2dType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLineSegment2dType(CLineSegment2dType const& init);
	void operator=(CLineSegment2dType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLineSegment2dType); }
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLineSegment2dType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLineSegment2dType_altova_EndPoint> EndPoint;
	struct EndPoint { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLineSegment2dType
