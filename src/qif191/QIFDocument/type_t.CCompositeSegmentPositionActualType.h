#pragma once

#include "type_t.CCompositeSegmentActualBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentPositionActualType : public ::qif191::t::CCompositeSegmentActualBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentPositionActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentPositionActualType(CCompositeSegmentPositionActualType const& init);
	void operator=(CCompositeSegmentPositionActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentPositionActualType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentPositionActualType
