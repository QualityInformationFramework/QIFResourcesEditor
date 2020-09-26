#pragma once

#include "type_t.CMultipleProductInstanceStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CProductionStudyResultsType : public ::qif191::t::CMultipleProductInstanceStudyResultsBaseType
{
public:
	QIF191_EXPORT CProductionStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProductionStudyResultsType(CProductionStudyResultsType const& init);
	void operator=(CProductionStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProductionStudyResultsType); }
	MemberElement<t::CControlIssueDetailsType, _altova_mi_t_altova_CProductionStudyResultsType_altova_ControlIssueDetails> ControlIssueDetails;
	struct ControlIssueDetails { typedef Iterator<t::CControlIssueDetailsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProductionStudyResultsType
