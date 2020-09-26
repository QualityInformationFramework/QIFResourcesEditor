#pragma once

#include "type_t.CTopologyBaseType.h"


namespace qif191
{

namespace t
{	

class CVertexType : public ::qif191::t::CTopologyBaseType
{
public:
	QIF191_EXPORT CVertexType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CVertexType(CVertexType const& init);
	void operator=(CVertexType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CVertexType); }

	MemberAttribute<double,_altova_mi_t_altova_CVertexType_altova_Tolerance, 0, 0> Tolerance;	// Tolerance Cdouble
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CVertexType_altova_Point> Point;
	struct Point { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CVertexType
