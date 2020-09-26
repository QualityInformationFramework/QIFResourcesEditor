#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementDeviceAccuracyBaseType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementDeviceAccuracyBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementDeviceAccuracyBaseType(CMeasurementDeviceAccuracyBaseType const& init);
	void operator=(CMeasurementDeviceAccuracyBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasurementDeviceAccuracyBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementDeviceAccuracyBaseType
