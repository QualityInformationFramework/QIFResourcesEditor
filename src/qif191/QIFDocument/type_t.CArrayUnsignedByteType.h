#pragma once

#include "type_t.CListUnsignedByteTypeType.h"


namespace qif191
{

namespace t
{	

class CArrayUnsignedByteType : public ::qif191::t::CListUnsignedByteTypeType
{
public:
	QIF191_EXPORT CArrayUnsignedByteType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayUnsignedByteType(CArrayUnsignedByteType const& init);
	void operator=(CArrayUnsignedByteType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayUnsignedByteType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CArrayUnsignedByteType_altova_N, 0, 0> N;	// N CunsignedInt
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayUnsignedByteType
