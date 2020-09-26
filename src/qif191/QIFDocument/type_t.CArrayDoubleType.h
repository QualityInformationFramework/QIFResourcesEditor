#pragma once

#include "type_t.CListDoubleTypeType.h"


namespace qif191
{

namespace t
{	

class CArrayDoubleType : public ::qif191::t::CListDoubleTypeType
{
public:
	QIF191_EXPORT CArrayDoubleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayDoubleType(CArrayDoubleType const& init);
	void operator=(CArrayDoubleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayDoubleType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CArrayDoubleType_altova_N, 0, 0> N;	// N CunsignedInt
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayDoubleType
