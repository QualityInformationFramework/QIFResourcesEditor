#pragma once

#include "type_t.CActualPointWithNormalBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasurePointActualType : public ::qif191::t::CActualPointWithNormalBaseType
{
public:
	QIF191_EXPORT CMeasurePointActualType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurePointActualType(CMeasurePointActualType const& init);
	void operator=(CMeasurePointActualType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurePointActualType); }
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CMeasurePointActualType_altova_Compensated> Compensated;
	struct Compensated { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<t::CActualLinearValueType, _altova_mi_t_altova_CMeasurePointActualType_altova_ProbeRadius> ProbeRadius;
	struct ProbeRadius { typedef Iterator<t::CActualLinearValueType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurePointActualType_altova_MeasurementDeviceId> MeasurementDeviceId;
	struct MeasurementDeviceId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurePointActualType_altova_SensorId> SensorId;
	struct SensorId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurePointActualType_altova_MeasurePointNominalId> MeasurePointNominalId;
	struct MeasurePointNominalId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurePointActualType
