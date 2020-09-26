#pragma once

#include "type_t.CPointWithNormalBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasurePointNominalType : public ::qif191::t::CPointWithNormalBaseType
{
public:
	QIF191_EXPORT CMeasurePointNominalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurePointNominalType(CMeasurePointNominalType const& init);
	void operator=(CMeasurePointNominalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurePointNominalType); }
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurePointNominalType_altova_MeasurementDeviceId> MeasurementDeviceId;
	struct MeasurementDeviceId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	MemberElement<t::CQIFReferenceFullType, _altova_mi_t_altova_CMeasurePointNominalType_altova_SensorId> SensorId;
	struct SensorId { typedef Iterator<t::CQIFReferenceFullType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurePointNominalType
