#pragma once

#include "type_t.CStatisticalStudyPlanBaseType.h"


namespace qif191
{

namespace t
{	

class CGageRandRStudyPlanType : public ::qif191::t::CStatisticalStudyPlanBaseType
{
public:
	QIF191_EXPORT CGageRandRStudyPlanType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGageRandRStudyPlanType(CGageRandRStudyPlanType const& init);
	void operator=(CGageRandRStudyPlanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGageRandRStudyPlanType); }
	MemberElement<t::CArrayReferenceFullType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MeasurementDeviceIds> MeasurementDeviceIds;
	struct MeasurementDeviceIds { typedef Iterator<t::CArrayReferenceFullType> iterator; };
	MemberElement<t::CGageRandRStudyEnumTypeType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_RandRStudyType> RandRStudyType;
	struct RandRStudyType { typedef Iterator<t::CGageRandRStudyEnumTypeType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_NumberOfAppraisers> NumberOfAppraisers;
	struct NumberOfAppraisers { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_NumberOfParts> NumberOfParts;
	struct NumberOfParts { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_NumberOfTrials> NumberOfTrials;
	struct NumberOfTrials { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumRelativeAppraiserVariation> MaximumRelativeAppraiserVariation;
	struct MaximumRelativeAppraiserVariation { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionLinearType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteLinearAppraiserVariation> MaximumAbsoluteLinearAppraiserVariation;
	struct MaximumAbsoluteLinearAppraiserVariation { typedef Iterator<t::CCriterionLinearType> iterator; };
	MemberElement<t::CCriterionAngularType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAngularAppraiserVariation> MaximumAbsoluteAngularAppraiserVariation;
	struct MaximumAbsoluteAngularAppraiserVariation { typedef Iterator<t::CCriterionAngularType> iterator; };
	MemberElement<t::CCriterionAreaType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAreaAppraiserVariation> MaximumAbsoluteAreaAppraiserVariation;
	struct MaximumAbsoluteAreaAppraiserVariation { typedef Iterator<t::CCriterionAreaType> iterator; };
	MemberElement<t::CCriterionForceType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteForceAppraiserVariation> MaximumAbsoluteForceAppraiserVariation;
	struct MaximumAbsoluteForceAppraiserVariation { typedef Iterator<t::CCriterionForceType> iterator; };
	MemberElement<t::CCriterionMassType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteMassAppraiserVariation> MaximumAbsoluteMassAppraiserVariation;
	struct MaximumAbsoluteMassAppraiserVariation { typedef Iterator<t::CCriterionMassType> iterator; };
	MemberElement<t::CCriterionPressureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsolutePressureAppraiserVariation> MaximumAbsolutePressureAppraiserVariation;
	struct MaximumAbsolutePressureAppraiserVariation { typedef Iterator<t::CCriterionPressureType> iterator; };
	MemberElement<t::CCriterionSpeedType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteSpeedAppraiserVariation> MaximumAbsoluteSpeedAppraiserVariation;
	struct MaximumAbsoluteSpeedAppraiserVariation { typedef Iterator<t::CCriterionSpeedType> iterator; };
	MemberElement<t::CCriterionTemperatureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTemperatureAppraiserVariation> MaximumAbsoluteTemperatureAppraiserVariation;
	struct MaximumAbsoluteTemperatureAppraiserVariation { typedef Iterator<t::CCriterionTemperatureType> iterator; };
	MemberElement<t::CCriterionTimeType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTimeAppraiserVariation> MaximumAbsoluteTimeAppraiserVariation;
	struct MaximumAbsoluteTimeAppraiserVariation { typedef Iterator<t::CCriterionTimeType> iterator; };
	MemberElement<t::CCriterionUserDefinedUnitType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteUserDefinedUnitAppraiserVariation> MaximumAbsoluteUserDefinedUnitAppraiserVariation;
	struct MaximumAbsoluteUserDefinedUnitAppraiserVariation { typedef Iterator<t::CCriterionUserDefinedUnitType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumRelativeEquipmentVariation> MaximumRelativeEquipmentVariation;
	struct MaximumRelativeEquipmentVariation { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionLinearType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteLinearEquipmentVariation> MaximumAbsoluteLinearEquipmentVariation;
	struct MaximumAbsoluteLinearEquipmentVariation { typedef Iterator<t::CCriterionLinearType> iterator; };
	MemberElement<t::CCriterionAngularType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAngularEquipmentVariation> MaximumAbsoluteAngularEquipmentVariation;
	struct MaximumAbsoluteAngularEquipmentVariation { typedef Iterator<t::CCriterionAngularType> iterator; };
	MemberElement<t::CCriterionAreaType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAreaEquipmentVariation> MaximumAbsoluteAreaEquipmentVariation;
	struct MaximumAbsoluteAreaEquipmentVariation { typedef Iterator<t::CCriterionAreaType> iterator; };
	MemberElement<t::CCriterionForceType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteForceEquipmentVariation> MaximumAbsoluteForceEquipmentVariation;
	struct MaximumAbsoluteForceEquipmentVariation { typedef Iterator<t::CCriterionForceType> iterator; };
	MemberElement<t::CCriterionMassType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteMassEquipmentVariation> MaximumAbsoluteMassEquipmentVariation;
	struct MaximumAbsoluteMassEquipmentVariation { typedef Iterator<t::CCriterionMassType> iterator; };
	MemberElement<t::CCriterionPressureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsolutePressureEquipmentVariation> MaximumAbsolutePressureEquipmentVariation;
	struct MaximumAbsolutePressureEquipmentVariation { typedef Iterator<t::CCriterionPressureType> iterator; };
	MemberElement<t::CCriterionSpeedType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteSpeedEquipmentVariation> MaximumAbsoluteSpeedEquipmentVariation;
	struct MaximumAbsoluteSpeedEquipmentVariation { typedef Iterator<t::CCriterionSpeedType> iterator; };
	MemberElement<t::CCriterionTemperatureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTemperatureEquipmentVariation> MaximumAbsoluteTemperatureEquipmentVariation;
	struct MaximumAbsoluteTemperatureEquipmentVariation { typedef Iterator<t::CCriterionTemperatureType> iterator; };
	MemberElement<t::CCriterionTimeType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTimeEquipmentVariation> MaximumAbsoluteTimeEquipmentVariation;
	struct MaximumAbsoluteTimeEquipmentVariation { typedef Iterator<t::CCriterionTimeType> iterator; };
	MemberElement<t::CCriterionUserDefinedUnitType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteUserDefinedUnitEquipmentVariation> MaximumAbsoluteUserDefinedUnitEquipmentVariation;
	struct MaximumAbsoluteUserDefinedUnitEquipmentVariation { typedef Iterator<t::CCriterionUserDefinedUnitType> iterator; };
	MemberElement<t::CCriterionDecimalType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumRelativeTotalRandR> MaximumRelativeTotalRandR;
	struct MaximumRelativeTotalRandR { typedef Iterator<t::CCriterionDecimalType> iterator; };
	MemberElement<t::CCriterionLinearType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteLinearTotalRandR> MaximumAbsoluteLinearTotalRandR;
	struct MaximumAbsoluteLinearTotalRandR { typedef Iterator<t::CCriterionLinearType> iterator; };
	MemberElement<t::CCriterionAngularType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAngularTotalRandR> MaximumAbsoluteAngularTotalRandR;
	struct MaximumAbsoluteAngularTotalRandR { typedef Iterator<t::CCriterionAngularType> iterator; };
	MemberElement<t::CCriterionAreaType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteAreaTotalRandR> MaximumAbsoluteAreaTotalRandR;
	struct MaximumAbsoluteAreaTotalRandR { typedef Iterator<t::CCriterionAreaType> iterator; };
	MemberElement<t::CCriterionForceType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteForceTotalRandR> MaximumAbsoluteForceTotalRandR;
	struct MaximumAbsoluteForceTotalRandR { typedef Iterator<t::CCriterionForceType> iterator; };
	MemberElement<t::CCriterionMassType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteMassTotalRandR> MaximumAbsoluteMassTotalRandR;
	struct MaximumAbsoluteMassTotalRandR { typedef Iterator<t::CCriterionMassType> iterator; };
	MemberElement<t::CCriterionPressureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsolutePressureTotalRandR> MaximumAbsolutePressureTotalRandR;
	struct MaximumAbsolutePressureTotalRandR { typedef Iterator<t::CCriterionPressureType> iterator; };
	MemberElement<t::CCriterionSpeedType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteSpeedTotalRandR> MaximumAbsoluteSpeedTotalRandR;
	struct MaximumAbsoluteSpeedTotalRandR { typedef Iterator<t::CCriterionSpeedType> iterator; };
	MemberElement<t::CCriterionTemperatureType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTemperatureTotalRandR> MaximumAbsoluteTemperatureTotalRandR;
	struct MaximumAbsoluteTemperatureTotalRandR { typedef Iterator<t::CCriterionTemperatureType> iterator; };
	MemberElement<t::CCriterionTimeType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteTimeTotalRandR> MaximumAbsoluteTimeTotalRandR;
	struct MaximumAbsoluteTimeTotalRandR { typedef Iterator<t::CCriterionTimeType> iterator; };
	MemberElement<t::CCriterionUserDefinedUnitType, _altova_mi_t_altova_CGageRandRStudyPlanType_altova_MaximumAbsoluteUserDefinedUnitTotalRandR> MaximumAbsoluteUserDefinedUnitTotalRandR;
	struct MaximumAbsoluteUserDefinedUnitTotalRandR { typedef Iterator<t::CCriterionUserDefinedUnitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGageRandRStudyPlanType
