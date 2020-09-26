#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class COffset23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT COffset23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT COffset23Type(COffset23Type const& init);
	void operator=(COffset23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COffset23Type); }
	MemberElement<t::COffset23CoreType, _altova_mi_t_altova_COffset23Type_altova_Offset23Core> Offset23Core;
	struct Offset23Core { typedef Iterator<t::COffset23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_COffset23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COffset23Type
