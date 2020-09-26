#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CTorus23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CTorus23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTorus23Type(CTorus23Type const& init);
	void operator=(CTorus23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTorus23Type); }
	MemberElement<t::CTorus23CoreType, _altova_mi_t_altova_CTorus23Type_altova_Torus23Core> Torus23Core;
	struct Torus23Core { typedef Iterator<t::CTorus23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CTorus23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTorus23Type
