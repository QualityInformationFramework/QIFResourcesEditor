#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CCylinder23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CCylinder23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCylinder23Type(CCylinder23Type const& init);
	void operator=(CCylinder23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCylinder23Type); }
	MemberElement<t::CCylinder23CoreType, _altova_mi_t_altova_CCylinder23Type_altova_Cylinder23Core> Cylinder23Core;
	struct Cylinder23Core { typedef Iterator<t::CCylinder23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CCylinder23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCylinder23Type
