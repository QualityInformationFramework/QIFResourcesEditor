#pragma once

#include "type_t.CMultipleProductInstanceStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CCapabilityStudyResultsType : public ::qif191::t::CMultipleProductInstanceStudyResultsBaseType
{
public:
	QIF191_EXPORT CCapabilityStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCapabilityStudyResultsType(CCapabilityStudyResultsType const& init);
	void operator=(CCapabilityStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCapabilityStudyResultsType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCapabilityStudyResultsType
