#pragma once



namespace qif191
{

namespace t
{	

class COrientationZoneShapeType : public TypeBase
{
public:
	QIF191_EXPORT COrientationZoneShapeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationZoneShapeType(COrientationZoneShapeType const& init);
	void operator=(COrientationZoneShapeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationZoneShapeType); }
	MemberElement<t::COrientationDiametricalZoneType, _altova_mi_t_altova_COrientationZoneShapeType_altova_DiametricalZone> DiametricalZone;
	struct DiametricalZone { typedef Iterator<t::COrientationDiametricalZoneType> iterator; };
	MemberElement<t::COrientationPlanarZoneType, _altova_mi_t_altova_COrientationZoneShapeType_altova_PlanarZone> PlanarZone;
	struct PlanarZone { typedef Iterator<t::COrientationPlanarZoneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationZoneShapeType
