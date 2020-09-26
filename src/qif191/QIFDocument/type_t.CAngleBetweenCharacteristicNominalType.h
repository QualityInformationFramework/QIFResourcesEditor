#pragma once

#include "type_t.CAngularCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CAngleBetweenCharacteristicNominalType : public ::qif191::t::CAngularCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CAngleBetweenCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAngleBetweenCharacteristicNominalType(CAngleBetweenCharacteristicNominalType const& init);
	void operator=(CAngleBetweenCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAngleBetweenCharacteristicNominalType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_AnalysisVector> AnalysisVector;
	struct AnalysisVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CAngleBetweenAnalysisModeEnumTypeType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_AnalysisMode> AnalysisMode;
	struct AnalysisMode { typedef Iterator<t::CAngleBetweenAnalysisModeEnumTypeType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CMeasurementDirectiveType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_MeasurementDirective> MeasurementDirective;
	struct MeasurementDirective { typedef Iterator<t::CMeasurementDirectiveType> iterator; };
	MemberElement<t::CPointType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_Vertex> Vertex;
	struct Vertex { typedef Iterator<t::CPointType> iterator; };
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CAngleBetweenCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAngleBetweenCharacteristicNominalType
