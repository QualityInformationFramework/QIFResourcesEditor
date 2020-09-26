#pragma once

#include "type_t.CCurve13BaseType.h"


namespace qif191
{

namespace t
{	

class CSpline13Type : public ::qif191::t::CCurve13BaseType
{
public:
	QIF191_EXPORT CSpline13Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpline13Type(CSpline13Type const& init);
	void operator=(CSpline13Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpline13Type); }
	MemberElement<t::CSpline13CoreType, _altova_mi_t_altova_CSpline13Type_altova_Spline13Core> Spline13Core;
	struct Spline13Core { typedef Iterator<t::CSpline13CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CSpline13Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpline13Type
