#pragma once

#include "type_t.CMultipleProductInstanceStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CProductionStudyPlanType : public ::qif191::t::CMultipleProductInstanceStudyPlanBaseType
{
public:
	QIF191_EXPORT CProductionStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProductionStudyPlanType(CProductionStudyPlanType const& init);
	void operator=(CProductionStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProductionStudyPlanType); }
	MemberElement<t::CSamplingMethodType, _altova_mi_t_altova_CProductionStudyPlanType_altova_SamplingMethod> SamplingMethod;
	struct SamplingMethod { typedef Iterator<t::CSamplingMethodType> iterator; };
	MemberElement<t::CControlMethodType, _altova_mi_t_altova_CProductionStudyPlanType_altova_ControlMethod> ControlMethod;
	struct ControlMethod { typedef Iterator<t::CControlMethodType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProductionStudyPlanType
