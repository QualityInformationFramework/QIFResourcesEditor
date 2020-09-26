#pragma once

#include "type_xs.CunsignedIntType.h"


namespace qif191
{

namespace t
{	

class CBalloonType : public ::qif191::xs::CunsignedIntType
{
public:
	QIF191_EXPORT CBalloonType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBalloonType(CBalloonType const& init);
	void operator=(CBalloonType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBalloonType); }
	QIF191_EXPORT void operator=(const unsigned& value);

	MemberAttribute<unsigned,_altova_mi_t_altova_CBalloonType_altova_Sub, 0, 0> Sub;	// Sub CNaturalType
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBalloonType
