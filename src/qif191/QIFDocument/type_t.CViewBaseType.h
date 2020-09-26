#pragma once

#include "type_t.CNodeWithIdBaseType.h"


namespace qif191
{

namespace t
{	

class CViewBaseType : public ::qif191::t::CNodeWithIdBaseType
{
public:
	QIF191_EXPORT CViewBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CViewBaseType(CViewBaseType const& init);
	void operator=(CViewBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CViewBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CViewBaseType
