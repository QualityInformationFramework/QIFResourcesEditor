#pragma once

#include "type_t.CMultipleProductInstanceStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CBiasStudyPlanType : public ::qif191::t::CMultipleProductInstanceStudyPlanBaseType
{
public:
	QIF191_EXPORT CBiasStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBiasStudyPlanType(CBiasStudyPlanType const& init);
	void operator=(CBiasStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBiasStudyPlanType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CBiasStudyPlanType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBiasStudyPlanType
