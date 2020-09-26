#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CSphere23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CSphere23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSphere23Type(CSphere23Type const& init);
	void operator=(CSphere23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSphere23Type); }
	MemberElement<t::CSphere23CoreType, _altova_mi_t_altova_CSphere23Type_altova_Sphere23Core> Sphere23Core;
	struct Sphere23Core { typedef Iterator<t::CSphere23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CSphere23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSphere23Type
