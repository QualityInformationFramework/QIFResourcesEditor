#pragma once

#include "type_t.CStatisticalStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CFirstArticleStudyPlanType : public ::qif191::t::CStatisticalStudyPlanBaseType
{
public:
	QIF191_EXPORT CFirstArticleStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFirstArticleStudyPlanType(CFirstArticleStudyPlanType const& init);
	void operator=(CFirstArticleStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFirstArticleStudyPlanType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_InSpecRatio> InSpecRatio;
	struct InSpecRatio { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_LinearAbsoluteMaximum> LinearAbsoluteMaximum;
	struct LinearAbsoluteMaximum { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_AngularAbsoluteMaximum> AngularAbsoluteMaximum;
	struct AngularAbsoluteMaximum { typedef Iterator<t::CAngularValueType> iterator; };
	MemberElement<t::CAreaValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_AreaAbsoluteMaximum> AreaAbsoluteMaximum;
	struct AreaAbsoluteMaximum { typedef Iterator<t::CAreaValueType> iterator; };
	MemberElement<t::CForceValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_ForceAbsoluteMaximum> ForceAbsoluteMaximum;
	struct ForceAbsoluteMaximum { typedef Iterator<t::CForceValueType> iterator; };
	MemberElement<t::CMassValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_MassAbsoluteMaximum> MassAbsoluteMaximum;
	struct MassAbsoluteMaximum { typedef Iterator<t::CMassValueType> iterator; };
	MemberElement<t::CPressureValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_PressureAbsoluteMaximum> PressureAbsoluteMaximum;
	struct PressureAbsoluteMaximum { typedef Iterator<t::CPressureValueType> iterator; };
	MemberElement<t::CSpeedValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_SpeedAbsoluteMaximum> SpeedAbsoluteMaximum;
	struct SpeedAbsoluteMaximum { typedef Iterator<t::CSpeedValueType> iterator; };
	MemberElement<t::CTemperatureValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_TemperatureAbsoluteMaximum> TemperatureAbsoluteMaximum;
	struct TemperatureAbsoluteMaximum { typedef Iterator<t::CTemperatureValueType> iterator; };
	MemberElement<t::CTimeValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_TimeAbsoluteMaximum> TimeAbsoluteMaximum;
	struct TimeAbsoluteMaximum { typedef Iterator<t::CTimeValueType> iterator; };
	MemberElement<t::CUserDefinedUnitValueType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_UserDefinedUnitAbsoluteMaximum> UserDefinedUnitAbsoluteMaximum;
	struct UserDefinedUnitAbsoluteMaximum { typedef Iterator<t::CUserDefinedUnitValueType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CFirstArticleStudyPlanType_altova_RelativeMaximum> RelativeMaximum;
	struct RelativeMaximum { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFirstArticleStudyPlanType
