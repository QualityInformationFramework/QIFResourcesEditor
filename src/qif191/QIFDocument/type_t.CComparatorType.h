#pragma once

#include "type_t.CProbingDeviceType.h"


namespace qif191
{

namespace t
{	

class CComparatorType : public ::qif191::t::CProbingDeviceType
{
public:
	QIF191_EXPORT CComparatorType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CComparatorType(CComparatorType const& init);
	void operator=(CComparatorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CComparatorType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CComparatorType
