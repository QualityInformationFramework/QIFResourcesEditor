#pragma once

#include "type_t.CListNaturalTypeType.h"


namespace qif191
{

namespace t
{	

class CArrayNaturalType : public ::qif191::t::CListNaturalTypeType
{
public:
	QIF191_EXPORT CArrayNaturalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayNaturalType(CArrayNaturalType const& init);
	void operator=(CArrayNaturalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayNaturalType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CArrayNaturalType_altova_N, 0, 0> N;	// N CunsignedInt
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayNaturalType
