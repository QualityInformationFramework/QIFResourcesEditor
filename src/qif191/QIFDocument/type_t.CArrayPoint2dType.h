#pragma once

#include "type_t.CListDoubleTypeType.h"


namespace qif191
{

namespace t
{	

class CArrayPoint2dType : public ::qif191::t::CListDoubleTypeType
{
public:
	QIF191_EXPORT CArrayPoint2dType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArrayPoint2dType(CArrayPoint2dType const& init);
	void operator=(CArrayPoint2dType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArrayPoint2dType); }
	QIF191_EXPORT void operator=(const string_type& value);

	MemberAttribute<unsigned __int64,_altova_mi_t_altova_CArrayPoint2dType_altova_N, 0, 0> N;	// N CpositiveInteger
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArrayPoint2dType
