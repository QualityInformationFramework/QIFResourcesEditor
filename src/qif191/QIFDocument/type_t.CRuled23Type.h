#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CRuled23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CRuled23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRuled23Type(CRuled23Type const& init);
	void operator=(CRuled23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRuled23Type); }
	MemberElement<t::CRuled23CoreType, _altova_mi_t_altova_CRuled23Type_altova_Ruled23Core> Ruled23Core;
	struct Ruled23Core { typedef Iterator<t::CRuled23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CRuled23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRuled23Type
