#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CSegment12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CSegment12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSegment12Type(CSegment12Type const& init);
	void operator=(CSegment12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSegment12Type); }
	MemberElement<t::CSegment12CoreType, _altova_mi_t_altova_CSegment12Type_altova_Segment12Core> Segment12Core;
	struct Segment12Core { typedef Iterator<t::CSegment12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSegment12Type
