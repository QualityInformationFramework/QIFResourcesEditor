#pragma once



namespace qif191
{

namespace t
{	

class CConcentricityDiametricalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CConcentricityDiametricalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityDiametricalZoneType(CConcentricityDiametricalZoneType const& init);
	void operator=(CConcentricityDiametricalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityDiametricalZoneType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityDiametricalZoneType
