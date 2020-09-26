#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CRevolution23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CRevolution23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CRevolution23Type(CRevolution23Type const& init);
	void operator=(CRevolution23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CRevolution23Type); }
	MemberElement<t::CRevolution23CoreType, _altova_mi_t_altova_CRevolution23Type_altova_Revolution23Core> Revolution23Core;
	struct Revolution23Core { typedef Iterator<t::CRevolution23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CRevolution23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CRevolution23Type
