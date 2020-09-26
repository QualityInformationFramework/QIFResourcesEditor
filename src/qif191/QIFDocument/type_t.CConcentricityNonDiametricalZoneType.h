#pragma once



namespace qif191
{

namespace t
{	

class CConcentricityNonDiametricalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CConcentricityNonDiametricalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityNonDiametricalZoneType(CConcentricityNonDiametricalZoneType const& init);
	void operator=(CConcentricityNonDiametricalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityNonDiametricalZoneType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityNonDiametricalZoneType
