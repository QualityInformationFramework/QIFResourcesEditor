#pragma once

#include "type_xs.Cbase64BinaryType.h"


namespace qif191
{

namespace t
{	

class CBinaryDataType : public ::qif191::xs::Cbase64BinaryType
{
public:
	QIF191_EXPORT CBinaryDataType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBinaryDataType(CBinaryDataType const& init);
	void operator=(CBinaryDataType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBinaryDataType); }
	QIF191_EXPORT void operator=(const std::vector<unsigned char>& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CBinaryDataType_altova_N, 0, 0> N;	// N CunsignedInt
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBinaryDataType
