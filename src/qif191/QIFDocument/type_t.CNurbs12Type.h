#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CNurbs12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CNurbs12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNurbs12Type(CNurbs12Type const& init);
	void operator=(CNurbs12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CNurbs12Type); }
	MemberElement<t::CNurbs12CoreType, _altova_mi_t_altova_CNurbs12Type_altova_Nurbs12Core> Nurbs12Core;
	struct Nurbs12Core { typedef Iterator<t::CNurbs12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNurbs12Type
