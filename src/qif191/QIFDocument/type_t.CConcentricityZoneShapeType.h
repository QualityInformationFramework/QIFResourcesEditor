#pragma once



namespace qif191
{

namespace t
{	

class CConcentricityZoneShapeType : public TypeBase
{
public:
	QIF191_EXPORT CConcentricityZoneShapeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConcentricityZoneShapeType(CConcentricityZoneShapeType const& init);
	void operator=(CConcentricityZoneShapeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConcentricityZoneShapeType); }
	MemberElement<t::CConcentricitySphericalZoneType, _altova_mi_t_altova_CConcentricityZoneShapeType_altova_SphericalZone> SphericalZone;
	struct SphericalZone { typedef Iterator<t::CConcentricitySphericalZoneType> iterator; };
	MemberElement<t::CConcentricityDiametricalZoneType, _altova_mi_t_altova_CConcentricityZoneShapeType_altova_DiametricalZone> DiametricalZone;
	struct DiametricalZone { typedef Iterator<t::CConcentricityDiametricalZoneType> iterator; };
	MemberElement<t::CConcentricityNonDiametricalZoneType, _altova_mi_t_altova_CConcentricityZoneShapeType_altova_NonDiametricalZone> NonDiametricalZone;
	struct NonDiametricalZone { typedef Iterator<t::CConcentricityNonDiametricalZoneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConcentricityZoneShapeType
