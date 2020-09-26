#pragma once

#include "type_t.CStatisticalStudyResultsBaseType.h"


namespace qif191
{

namespace t
{	

class CFirstArticleStudyResultsType : public ::qif191::t::CStatisticalStudyResultsBaseType
{
public:
	QIF191_EXPORT CFirstArticleStudyResultsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFirstArticleStudyResultsType(CFirstArticleStudyResultsType const& init);
	void operator=(CFirstArticleStudyResultsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CFirstArticleStudyResultsType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_InSpecRatio> InSpecRatio;
	struct InSpecRatio { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_LinearAbsoluteMaximum> LinearAbsoluteMaximum;
	struct LinearAbsoluteMaximum { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CActualAngularValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_AngularAbsoluteMaximum> AngularAbsoluteMaximum;
	struct AngularAbsoluteMaximum { typedef Iterator<t::CActualAngularValueType> iterator; };
	MemberElement<t::CActualAreaValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_AreaAbsoluteMaximum> AreaAbsoluteMaximum;
	struct AreaAbsoluteMaximum { typedef Iterator<t::CActualAreaValueType> iterator; };
	MemberElement<t::CActualForceValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_ForceAbsoluteMaximum> ForceAbsoluteMaximum;
	struct ForceAbsoluteMaximum { typedef Iterator<t::CActualForceValueType> iterator; };
	MemberElement<t::CActualMassValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_MassAbsoluteMaximum> MassAbsoluteMaximum;
	struct MassAbsoluteMaximum { typedef Iterator<t::CActualMassValueType> iterator; };
	MemberElement<t::CActualPressureValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_PressureAbsoluteMaximum> PressureAbsoluteMaximum;
	struct PressureAbsoluteMaximum { typedef Iterator<t::CActualPressureValueType> iterator; };
	MemberElement<t::CActualSpeedValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_SpeedAbsoluteMaximum> SpeedAbsoluteMaximum;
	struct SpeedAbsoluteMaximum { typedef Iterator<t::CActualSpeedValueType> iterator; };
	MemberElement<t::CActualTemperatureValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_TemperatureAbsoluteMaximum> TemperatureAbsoluteMaximum;
	struct TemperatureAbsoluteMaximum { typedef Iterator<t::CActualTemperatureValueType> iterator; };
	MemberElement<t::CActualTimeValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_TimeAbsoluteMaximum> TimeAbsoluteMaximum;
	struct TimeAbsoluteMaximum { typedef Iterator<t::CActualTimeValueType> iterator; };
	MemberElement<t::CActualUserDefinedUnitValueType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_UserDefinedUnitAbsoluteMaximum> UserDefinedUnitAbsoluteMaximum;
	struct UserDefinedUnitAbsoluteMaximum { typedef Iterator<t::CActualUserDefinedUnitValueType> iterator; };
	MemberElement<t::CActualDecimalType, _altova_mi_t_altova_CFirstArticleStudyResultsType_altova_RelativeMaximum> RelativeMaximum;
	struct RelativeMaximum { typedef Iterator<t::CActualDecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFirstArticleStudyResultsType
