#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CPlane23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CPlane23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlane23Type(CPlane23Type const& init);
	void operator=(CPlane23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlane23Type); }
	MemberElement<t::CPlane23CoreType, _altova_mi_t_altova_CPlane23Type_altova_Plane23Core> Plane23Core;
	struct Plane23Core { typedef Iterator<t::CPlane23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CPlane23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlane23Type
