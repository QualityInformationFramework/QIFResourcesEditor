#pragma once

#include "type_t.CMultipleProductInstanceStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CCapabilityStudyPlanType : public ::qif191::t::CMultipleProductInstanceStudyPlanBaseType
{
public:
	QIF191_EXPORT CCapabilityStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCapabilityStudyPlanType(CCapabilityStudyPlanType const& init);
	void operator=(CCapabilityStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCapabilityStudyPlanType); }
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CCapabilityStudyPlanType_altova_CpkThreshold> CpkThreshold;
	struct CpkThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CCapabilityStudyPlanType_altova_PpkThreshold> PpkThreshold;
	struct PpkThreshold { typedef Iterator<t::CCriterionDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCapabilityStudyPlanType
