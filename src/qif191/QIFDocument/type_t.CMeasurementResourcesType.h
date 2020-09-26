#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementResourcesType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementResourcesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementResourcesType(CMeasurementResourcesType const& init);
	void operator=(CMeasurementResourcesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementResourcesType); }
	MemberElement<t::CVersionType, _altova_mi_t_altova_CMeasurementResourcesType_altova_Version> Version;
	struct Version { typedef Iterator<t::CVersionType> iterator; };
	MemberElement<t::CCarriagesType, _altova_mi_t_altova_CMeasurementResourcesType_altova_Carriages> Carriages;
	struct Carriages { typedef Iterator<t::CCarriagesType> iterator; };
	MemberElement<t::CFixturesType, _altova_mi_t_altova_CMeasurementResourcesType_altova_Fixtures> Fixtures;
	struct Fixtures { typedef Iterator<t::CFixturesType> iterator; };
	MemberElement<t::CMeasurementDevicesType, _altova_mi_t_altova_CMeasurementResourcesType_altova_MeasurementDevices> MeasurementDevices;
	struct MeasurementDevices { typedef Iterator<t::CMeasurementDevicesType> iterator; };
	MemberElement<t::CSensorsType, _altova_mi_t_altova_CMeasurementResourcesType_altova_Sensors> Sensors;
	struct Sensors { typedef Iterator<t::CSensorsType> iterator; };
	MemberElement<t::CToolsType, _altova_mi_t_altova_CMeasurementResourcesType_altova_Tools> Tools;
	struct Tools { typedef Iterator<t::CToolsType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementResourcesType
