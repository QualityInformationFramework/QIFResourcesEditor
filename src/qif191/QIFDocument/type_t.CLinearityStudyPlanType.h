#pragma once

#include "type_t.CStatisticalStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CLinearityStudyPlanType : public ::qif191::t::CStatisticalStudyPlanBaseType
{
public:
	QIF191_EXPORT CLinearityStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLinearityStudyPlanType(CLinearityStudyPlanType const& init);
	void operator=(CLinearityStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLinearityStudyPlanType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_GoodnessOfFitThreshold> GoodnessOfFitThreshold;
	struct GoodnessOfFitThreshold { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_LinearAbsoluteLinearityMinimum> LinearAbsoluteLinearityMinimum;
	struct LinearAbsoluteLinearityMinimum { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_AngularAbsoluteLinearityMinimum> AngularAbsoluteLinearityMinimum;
	struct AngularAbsoluteLinearityMinimum { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAreaValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_AreaAbsoluteLinearityMinimum> AreaAbsoluteLinearityMinimum;
	struct AreaAbsoluteLinearityMinimum { typedef Iterator<t::CAreaValueType> iterator; };
	MemberElement<t::CForceValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_ForceAbsoluteLinearityMinimum> ForceAbsoluteLinearityMinimum;
	struct ForceAbsoluteLinearityMinimum { typedef Iterator<t::CForceValueType> iterator; };
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_MassAbsoluteLinearityMinimum> MassAbsoluteLinearityMinimum;
	struct MassAbsoluteLinearityMinimum { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_PressureAbsoluteLinearityMinimum> PressureAbsoluteLinearityMinimum;
	struct PressureAbsoluteLinearityMinimum { typedef Iterator<t::CPressureValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_SpeedAbsoluteLinearityMinimum> SpeedAbsoluteLinearityMinimum;
	struct SpeedAbsoluteLinearityMinimum { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_TemperatureAbsoluteLinearityMinimum> TemperatureAbsoluteLinearityMinimum;
	struct TemperatureAbsoluteLinearityMinimum { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CTimeValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_TimeAbsoluteLinearityMinimum> TimeAbsoluteLinearityMinimum;
	struct TimeAbsoluteLinearityMinimum { typedef Iterator<t::CTimeValueType> iterator; };
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_UserDefinedUnitAbsoluteLinearityMinimum> UserDefinedUnitAbsoluteLinearityMinimum;
	struct UserDefinedUnitAbsoluteLinearityMinimum { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CLinearityStudyPlanType_altova_RelativeLinearityMinimum> RelativeLinearityMinimum;
	struct RelativeLinearityMinimum { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLinearityStudyPlanType
