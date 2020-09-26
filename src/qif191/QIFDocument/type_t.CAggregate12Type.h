#pragma once

#include "type_t.CCurve12BaseType.h"


namespace qif191
{

namespace t
{	

class CAggregate12Type : public ::qif191::t::CCurve12BaseType
{
public:
	QIF191_EXPORT CAggregate12Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAggregate12Type(CAggregate12Type const& init);
	void operator=(CAggregate12Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAggregate12Type); }
	MemberElement<t::CAggregate12CoreType, _altova_mi_t_altova_CAggregate12Type_altova_Aggregate12Core> Aggregate12Core;
	struct Aggregate12Core { typedef Iterator<t::CAggregate12CoreType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAggregate12Type
