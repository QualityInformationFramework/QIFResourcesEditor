#pragma once

#include "type_t.CCompositeSegmentStatsEvalBaseType.h"


namespace qif191
{

namespace t
{	

class CCompositeSegmentSymmetryStatsEvalType : public ::qif191::t::CCompositeSegmentStatsEvalBaseType
{
public:
	QIF191_EXPORT CCompositeSegmentSymmetryStatsEvalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCompositeSegmentSymmetryStatsEvalType(CCompositeSegmentSymmetryStatsEvalType const& init);
	void operator=(CCompositeSegmentSymmetryStatsEvalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCompositeSegmentSymmetryStatsEvalType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCompositeSegmentSymmetryStatsEvalType
