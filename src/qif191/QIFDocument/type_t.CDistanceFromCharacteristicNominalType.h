#pragma once

#include "type_t.CLinearCharacteristicNominalBaseType.h"


namespace qif191
{

namespace t
{	

class CDistanceFromCharacteristicNominalType : public ::qif191::t::CLinearCharacteristicNominalBaseType
{
public:
	QIF191_EXPORT CDistanceFromCharacteristicNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDistanceFromCharacteristicNominalType(CDistanceFromCharacteristicNominalType const& init);
	void operator=(CDistanceFromCharacteristicNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CDistanceFromCharacteristicNominalType); }
	MemberElement<t::COriginReferenceType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_OriginReference> OriginReference;
	struct OriginReference { typedef Iterator<t::COriginReferenceType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_AnalysisVector> AnalysisVector;
	struct AnalysisVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<t::CDistanceBetweenAnalysisModeEnumTypeType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_AnalysisMode> AnalysisMode;
	struct AnalysisMode { typedef Iterator<t::CDistanceBetweenAnalysisModeEnumTypeType> iterator; };
	MemberElement<t::CMeasurementDirectiveType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_MeasurementDirective> MeasurementDirective;
	struct MeasurementDirective { typedef Iterator<t::CMeasurementDirectiveType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_CoordinateSystemId> CoordinateSystemId;
	struct CoordinateSystemId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CCharacteristicDirectionalZoneLimitType, _altova_mi_t_altova_CDistanceFromCharacteristicNominalType_altova_ZoneLimit> ZoneLimit;
	struct ZoneLimit { typedef Iterator<t::CCharacteristicDirectionalZoneLimitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDistanceFromCharacteristicNominalType
