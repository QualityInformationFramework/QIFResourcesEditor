#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementDevicesType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementDevicesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementDevicesType(CMeasurementDevicesType const& init);
	void operator=(CMeasurementDevicesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementDevicesType); }
	MemberElement<t::CMeasurementDeviceType, _altova_mi_t_altova_CMeasurementDevicesType_altova_MeasurementDevice> MeasurementDevice;
	struct MeasurementDevice { typedef Iterator<t::CMeasurementDeviceType> iterator; };
	MemberElement<t::CCMMType, _altova_mi_t_altova_CMeasurementDevicesType_altova_CMM> CMM;
	struct CMM { typedef Iterator<t::CCMMType> iterator; };
	MemberElement<t::CCaliperType, _altova_mi_t_altova_CMeasurementDevicesType_altova_Caliper> Caliper;
	struct Caliper { typedef Iterator<t::CCaliperType> iterator; };
	MemberElement<t::CComparatorType, _altova_mi_t_altova_CMeasurementDevicesType_altova_Comparator> Comparator;
	struct Comparator { typedef Iterator<t::CComparatorType> iterator; };
	MemberElement<t::CGageDeviceType, _altova_mi_t_altova_CMeasurementDevicesType_altova_GageDevice> GageDevice;
	struct GageDevice { typedef Iterator<t::CGageDeviceType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementDevicesType
