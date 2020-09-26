#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CArcConic12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CArcConic12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcConic12Type(CArcConic12Type const& init);
	void operator=(CArcConic12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArcConic12Type); }
	MemberElement<t::CArcConic12CoreType, _altova_mi_t_altova_CArcConic12Type_altova_ArcConic12Core> ArcConic12Core;
	struct ArcConic12Core { typedef Iterator<t::CArcConic12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcConic12Type
