#pragma once

#include "type_t.CLeaderType.h"


namespace qif191
{

namespace t
{	

class CLeaderDoubleHeadType : public ::qif191::t::CLeaderType
{
public:
	QIF191_EXPORT CLeaderDoubleHeadType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderDoubleHeadType(CLeaderDoubleHeadType const& init);
	void operator=(CLeaderDoubleHeadType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderDoubleHeadType); }
	MemberElement<t::CLeaderHeadFormEnumTypeType, _altova_mi_t_altova_CLeaderDoubleHeadType_altova_HeadForm2> HeadForm2;
	struct HeadForm2 { typedef Iterator<t::CLeaderHeadFormEnumTypeType> iterator; };
	MemberElement<t::CPoint2dSimpleTypeType, _altova_mi_t_altova_CLeaderDoubleHeadType_altova_PointConnection> PointConnection;
	struct PointConnection { typedef Iterator<t::CPoint2dSimpleTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderDoubleHeadType
