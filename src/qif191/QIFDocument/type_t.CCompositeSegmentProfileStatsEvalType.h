#pragma once

#include "type_t.CCompositeSegmentStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentProfileStatsEvalType : public ::qif191::t::CCompositeSegmentStatsEvalBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentProfileStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentProfileStatsEvalType(CCompositeSegmentProfileStatsEvalType const& init);
	void operator=(CCompositeSegmentProfileStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentProfileStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentProfileStatsEvalType
