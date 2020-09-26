#pragma once



namespace qif191
{

namespace t
{	

class CManufacturingProcessTraceabilitiesType : public TypeBase
{
public:
	QIF191_EXPORT CManufacturingProcessTraceabilitiesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CManufacturingProcessTraceabilitiesType(CManufacturingProcessTraceabilitiesType const& init);
	void operator=(CManufacturingProcessTraceabilitiesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CManufacturingProcessTraceabilitiesType); }
	MemberElement<t::CManufacturingProcessTraceabilityType, _altova_mi_t_altova_CManufacturingProcessTraceabilitiesType_altova_ManufacturingProcessTraceability> ManufacturingProcessTraceability;
	struct ManufacturingProcessTraceability { typedef Iterator<t::CManufacturingProcessTraceabilityType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CManufacturingProcessTraceabilitiesType
