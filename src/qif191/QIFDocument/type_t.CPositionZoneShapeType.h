#pragma once



namespace qif191
{

namespace t
{	

class CPositionZoneShapeType : public TypeBase
{
public:
	QIF191_EXPORT CPositionZoneShapeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionZoneShapeType(CPositionZoneShapeType const& init);
	void operator=(CPositionZoneShapeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionZoneShapeType); }
	MemberElement<t::CPositionSphericalZoneType, _altova_mi_t_altova_CPositionZoneShapeType_altova_SphericalZone> SphericalZone;
	struct SphericalZone { typedef Iterator<t::CPositionSphericalZoneType> iterator; };
	MemberElement<t::CPositionDiametricalZoneType, _altova_mi_t_altova_CPositionZoneShapeType_altova_DiametricalZone> DiametricalZone;
	struct DiametricalZone { typedef Iterator<t::CPositionDiametricalZoneType> iterator; };
	MemberElement<t::CPositionNonDiametricalZoneType, _altova_mi_t_altova_CPositionZoneShapeType_altova_NonDiametricalZone> NonDiametricalZone;
	struct NonDiametricalZone { typedef Iterator<t::CPositionNonDiametricalZoneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionZoneShapeType
