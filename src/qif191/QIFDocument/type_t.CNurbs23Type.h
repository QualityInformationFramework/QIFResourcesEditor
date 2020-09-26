#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CNurbs23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs23Type(CNurbs23Type const& init);
	void operator=(CNurbs23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs23Type); }
	MemberElement<t::CNurbs23CoreType, _altova_mi_t_altova_CNurbs23Type_altova_Nurbs23Core> Nurbs23Core;
	struct Nurbs23Core { typedef Iterator<t::CNurbs23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CNurbs23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs23Type
