#pragma once

#include "type_t.CSurfaceBaseType.h"


namespace qif191
{

namespace t
{	

class CExtrude23Type : public ::qif191::t::CSurfaceBaseType
{
public:
	QIF191_EXPORT CExtrude23Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrude23Type(CExtrude23Type const& init);
	void operator=(CExtrude23Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrude23Type); }
	MemberElement<t::CExtrude23CoreType, _altova_mi_t_altova_CExtrude23Type_altova_Extrude23Core> Extrude23Core;
	struct Extrude23Core { typedef Iterator<t::CExtrude23CoreType> iterator; };
	MemberElement<t::CElementReferenceType, _altova_mi_t_altova_CExtrude23Type_altova_Transform> Transform;
	struct Transform { typedef Iterator<t::CElementReferenceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrude23Type
