#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearityStudyResultsType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CLinearityStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearityStudyResultsType(CLinearityStudyResultsType const& init);
	void operator=(CLinearityStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearityStudyResultsType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_SampleSize> SampleSize;
	struct SampleSize { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_GoodnessOfFit> GoodnessOfFit;
	struct GoodnessOfFit { typedef Iterator<t::CActualDecimalType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_LinearAbsoluteLinearity> LinearAbsoluteLinearity;
	struct LinearAbsoluteLinearity { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_AngularAbsoluteLinearity> AngularAbsoluteLinearity;
	struct AngularAbsoluteLinearity { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_AreaAbsoluteLinearity> AreaAbsoluteLinearity;
	struct AreaAbsoluteLinearity { typedef Iterator<t::CActualAreaValueType> iterator; };
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_ForceAbsoluteLinearity> ForceAbsoluteLinearity;
	struct ForceAbsoluteLinearity { typedef Iterator<t::CActualForceValueType> iterator; };
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_MassAbsoluteLinearity> MassAbsoluteLinearity;
	struct MassAbsoluteLinearity { typedef Iterator<t::CActualMassValueType> iterator; };
	MemberElement<t::CActualPressureValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_PressureAbsoluteLinearity> PressureAbsoluteLinearity;
	struct PressureAbsoluteLinearity { typedef Iterator<t::CActualPressureValueType> iterator; };
	MemberElement<t::CActualSpeedValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_SpeedAbsoluteLinearity> SpeedAbsoluteLinearity;
	struct SpeedAbsoluteLinearity { typedef Iterator<t::CActualSpeedValueType> iterator; };
	MemberElement<t::CActualTemperatureValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_TemperatureAbsoluteLinearity> TemperatureAbsoluteLinearity;
	struct TemperatureAbsoluteLinearity { typedef Iterator<t::CActualTemperatureValueType> iterator; };
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_TimeAbsoluteLinearity> TimeAbsoluteLinearity;
	struct TimeAbsoluteLinearity { typedef Iterator<t::CActualTimeValueType> iterator; };
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_UserDefinedUnitAbsoluteLinearity> UserDefinedUnitAbsoluteLinearity;
	struct UserDefinedUnitAbsoluteLinearity { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CLinearityStudyResultsType_altova_RelativeLinearity> RelativeLinearity;
	struct RelativeLinearity { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearityStudyResultsType
