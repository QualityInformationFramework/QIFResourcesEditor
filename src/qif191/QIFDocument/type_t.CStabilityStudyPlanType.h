#pragma once

#include "type_t.CStatisticalStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CStabilityStudyPlanType : public ::qif191::t::CStatisticalStudyPlanBaseType
{
public:
	QIF191_EXPORT CStabilityStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStabilityStudyPlanType(CStabilityStudyPlanType const& init);
	void operator=(CStabilityStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStabilityStudyPlanType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CStabilityStudyPlanType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CStabilityStudyPlanType_altova_SampleSize> SampleSize;
	struct SampleSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CStabilityStudyPlanType_altova_SampleFrequency> SampleFrequency;
	struct SampleFrequency { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CSamplingIntervalType, _altova_mi_t_altova_CStabilityStudyPlanType_altova_SamplingInterval> SamplingInterval;
	struct SamplingInterval { typedef Iterator<t::CSamplingIntervalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStabilityStudyPlanType
