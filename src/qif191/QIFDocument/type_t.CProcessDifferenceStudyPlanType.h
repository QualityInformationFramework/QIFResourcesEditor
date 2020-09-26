#pragma once

#include "type_t.CStatisticalStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CProcessDifferenceStudyPlanType : public ::qif191::t::CStatisticalStudyPlanBaseType
{
public:
	QIF191_EXPORT CProcessDifferenceStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProcessDifferenceStudyPlanType(CProcessDifferenceStudyPlanType const& init);
	void operator=(CProcessDifferenceStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProcessDifferenceStudyPlanType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_NumberOfSamples> NumberOfSamples;
	struct NumberOfSamples { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_SubgroupSize> SubgroupSize;
	struct SubgroupSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_LinearAbsoluteDifference> LinearAbsoluteDifference;
	struct LinearAbsoluteDifference { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_AngularAbsoluteDifference> AngularAbsoluteDifference;
	struct AngularAbsoluteDifference { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAreaValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_AreaAbsoluteDifference> AreaAbsoluteDifference;
	struct AreaAbsoluteDifference { typedef Iterator<t::CAreaValueType> iterator; };
	MemberElement<t::CForceValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_ForceAbsoluteDifference> ForceAbsoluteDifference;
	struct ForceAbsoluteDifference { typedef Iterator<t::CForceValueType> iterator; };
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_MassAbsoluteDifference> MassAbsoluteDifference;
	struct MassAbsoluteDifference { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_PressureAbsoluteDifference> PressureAbsoluteDifference;
	struct PressureAbsoluteDifference { typedef Iterator<t::CPressureValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_SpeedAbsoluteDifference> SpeedAbsoluteDifference;
	struct SpeedAbsoluteDifference { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_TemperatureAbsoluteDifference> TemperatureAbsoluteDifference;
	struct TemperatureAbsoluteDifference { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CTimeValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_TimeAbsoluteDifference> TimeAbsoluteDifference;
	struct TimeAbsoluteDifference { typedef Iterator<t::CTimeValueType> iterator; };
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_UserDefinedUnitAbsoluteDifference> UserDefinedUnitAbsoluteDifference;
	struct UserDefinedUnitAbsoluteDifference { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CProcessDifferenceStudyPlanType_altova_RelativeDifference> RelativeDifference;
	struct RelativeDifference { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProcessDifferenceStudyPlanType
