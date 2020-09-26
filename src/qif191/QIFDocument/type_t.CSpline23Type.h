#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CSpline23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CSpline23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpline23Type(CSpline23Type const& init);
	void operator=(CSpline23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpline23Type); }
	MemberElement<t::CSpline23CoreType, _altova_mi_t_altova_CSpline23Type_altova_Spline23Core> Spline23Core;
	struct Spline23Core { typedef Iterator<t::CSpline23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CSpline23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpline23Type
