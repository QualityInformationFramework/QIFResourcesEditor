#pragma once



namespace qif191
{

namespace t
{	

class CSensorsType : public TypeBase
{
public:
	QIF191_EXPORT CSensorsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSensorsType(CSensorsType const& init);
	void operator=(CSensorsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSensorsType); }
	MemberElement<t::CSensorType, _altova_mi_t_altova_CSensorsType_altova_Sensor> Sensor;
	struct Sensor { typedef Iterator<t::CSensorType> iterator; };
	MemberElement<t::CTouchProbeType, _altova_mi_t_altova_CSensorsType_altova_TouchProbe> TouchProbe;
	struct TouchProbe { typedef Iterator<t::CTouchProbeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSensorsType
