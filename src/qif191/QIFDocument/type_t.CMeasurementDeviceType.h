#pragma once

#include "type_t.CMeasurementResourceBaseType.h"


namespace qif191
{

namespace t
{	

class CMeasurementDeviceType : public ::qif191::t::CMeasurementResourceBaseType
{
public:
	QIF191_EXPORT CMeasurementDeviceType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementDeviceType(CMeasurementDeviceType const& init);
	void operator=(CMeasurementDeviceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementDeviceType); }
	MemberElement<t::CCalibrationsType, _altova_mi_t_altova_CMeasurementDeviceType_altova_Calibrations> Calibrations;
	struct Calibrations { typedef Iterator<t::CCalibrationsType> iterator; };
	MemberElement<t::CTemperaturesType, _altova_mi_t_altova_CMeasurementDeviceType_altova_InspectionTemperatures> InspectionTemperatures;
	struct InspectionTemperatures { typedef Iterator<t::CTemperaturesType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementDeviceType
