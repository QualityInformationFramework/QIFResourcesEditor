#pragma once

#include "type_t.CCurveCoreBaseType.h"


namespace qif191
{

namespace t
{	

class CSegment12CoreType : public ::qif191::t::CCurveCoreBaseType
{
public:
	QIF191_EXPORT CSegment12CoreType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSegment12CoreType(CSegment12CoreType const& init);
	void operator=(CSegment12CoreType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSegment12CoreType); }
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CSegment12CoreType_altova_StartPoint> StartPoint;
	struct StartPoint { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CSegment12CoreType_altova_EndPoint> EndPoint;
	struct EndPoint { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSegment12CoreType
