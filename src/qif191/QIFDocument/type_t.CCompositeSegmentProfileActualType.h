#pragma once

#include "type_t.CCompositeSegmentActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentProfileActualType : public ::qif191::t::CCompositeSegmentActualBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentProfileActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentProfileActualType(CCompositeSegmentProfileActualType const& init);
	void operator=(CCompositeSegmentProfileActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentProfileActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentProfileActualType
