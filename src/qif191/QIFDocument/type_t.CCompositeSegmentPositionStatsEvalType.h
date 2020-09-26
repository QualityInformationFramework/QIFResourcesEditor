#pragma once

#include "type_t.CCompositeSegmentStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentPositionStatsEvalType : public ::qif191::t::CCompositeSegmentStatsEvalBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentPositionStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentPositionStatsEvalType(CCompositeSegmentPositionStatsEvalType const& init);
	void operator=(CCompositeSegmentPositionStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentPositionStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentPositionStatsEvalType
