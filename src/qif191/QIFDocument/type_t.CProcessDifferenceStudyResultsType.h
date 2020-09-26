#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CProcessDifferenceStudyResultsType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CProcessDifferenceStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CProcessDifferenceStudyResultsType(CProcessDifferenceStudyResultsType const& init);
	void operator=(CProcessDifferenceStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CProcessDifferenceStudyResultsType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_NumberOfSamples> NumberOfSamples;
	struct NumberOfSamples { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_SubgroupSize> SubgroupSize;
	struct SubgroupSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_ManufacturingProcessId> ManufacturingProcessId;
	struct ManufacturingProcessId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_LinearAbsoluteDifference> LinearAbsoluteDifference;
	struct LinearAbsoluteDifference { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_AngularAbsoluteDifference> AngularAbsoluteDifference;
	struct AngularAbsoluteDifference { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_AreaAbsoluteDifference> AreaAbsoluteDifference;
	struct AreaAbsoluteDifference { typedef Iterator<t::CActualAreaValueType> iterator; };
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_ForceAbsoluteDifference> ForceAbsoluteDifference;
	struct ForceAbsoluteDifference { typedef Iterator<t::CActualForceValueType> iterator; };
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_MassAbsoluteDifference> MassAbsoluteDifference;
	struct MassAbsoluteDifference { typedef Iterator<t::CActualMassValueType> iterator; };
	MemberElement<t::CActualPressureValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_PressureAbsoluteDifference> PressureAbsoluteDifference;
	struct PressureAbsoluteDifference { typedef Iterator<t::CActualPressureValueType> iterator; };
	MemberElement<t::CActualSpeedValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_SpeedAbsoluteDifference> SpeedAbsoluteDifference;
	struct SpeedAbsoluteDifference { typedef Iterator<t::CActualSpeedValueType> iterator; };
	MemberElement<t::CActualTemperatureValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_TemperatureAbsoluteDifference> TemperatureAbsoluteDifference;
	struct TemperatureAbsoluteDifference { typedef Iterator<t::CActualTemperatureValueType> iterator; };
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_TimeAbsoluteDifference> TimeAbsoluteDifference;
	struct TimeAbsoluteDifference { typedef Iterator<t::CActualTimeValueType> iterator; };
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_UserDefinedUnitAbsoluteDifference> UserDefinedUnitAbsoluteDifference;
	struct UserDefinedUnitAbsoluteDifference { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CProcessDifferenceStudyResultsType_altova_RelativeDifference> RelativeDifference;
	struct RelativeDifference { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CProcessDifferenceStudyResultsType
