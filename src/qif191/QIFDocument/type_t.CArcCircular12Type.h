#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CArcCircular12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CArcCircular12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcCircular12Type(CArcCircular12Type const& init);
	void operator=(CArcCircular12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcCircular12Type); }
	MemberElement<t::CArcCircular12CoreType, _altova_mi_t_altova_CArcCircular12Type_altova_ArcCircular12Core> ArcCircular12Core;
	struct ArcCircular12Core { typedef Iterator<t::CArcCircular12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcCircular12Type
