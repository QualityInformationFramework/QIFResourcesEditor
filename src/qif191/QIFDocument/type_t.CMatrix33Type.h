#pragma once

#include "type_t.CListDouble9TypeType.h"


namespace qif191
{

namespace t
{	

class CMatrix33Type : public ::qif191::t::CListDouble9TypeType
{
public:
	QIF191_EXPORT CMatrix33Type(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMatrix33Type(CMatrix33Type const& init);
	void operator=(CMatrix33Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMatrix33Type); }
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMatrix33Type
