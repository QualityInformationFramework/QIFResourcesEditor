#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CEdgeType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CEdgeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CEdgeType(CEdgeType const& init);
	void operator=(CEdgeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CEdgeType); }

	MemberAttribute<double,_altova_mi_t_altova_CEdgeType_altova_Tolerance, 0, 0> Tolerance;	// Tolerance Cdouble
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CEdgeType_altova_Curve> Curve;
	struct Curve { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CEdgeType_altova_VertexBeg> VertexBeg;
	struct VertexBeg { typedef Iterator<t::CElementReferenceType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CEdgeType_altova_VertexEnd> VertexEnd;
	struct VertexEnd { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CEdgeType
