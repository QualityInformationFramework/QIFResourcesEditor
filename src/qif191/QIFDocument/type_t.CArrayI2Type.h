#pragma once

#include "type_t.CListIntTypeType.h"


namespace qif191
{

namespace t
{	

class CArrayI2Type : public ::qif191::t::CListIntTypeType
{
public:
	QIF191_EXPORT CArrayI2Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayI2Type(CArrayI2Type const& init);
	void operator=(CArrayI2Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayI2Type); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CArrayI2Type_altova_N, 0, 0> N;	// N CpositiveInteger
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayI2Type
