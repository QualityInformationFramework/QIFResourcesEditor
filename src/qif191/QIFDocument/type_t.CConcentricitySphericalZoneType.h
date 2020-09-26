#pragma once



namespace qif191
{

namespace t
{	

class CConcentricitySphericalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CConcentricitySphericalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricitySphericalZoneType(CConcentricitySphericalZoneType const& init);
	void operator=(CConcentricitySphericalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricitySphericalZoneType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricitySphericalZoneType
