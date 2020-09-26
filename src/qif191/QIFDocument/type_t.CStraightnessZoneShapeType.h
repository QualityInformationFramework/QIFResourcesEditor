#pragma once



namespace qif191
{

namespace t
{	

class CStraightnessZoneShapeType : public TypeBase
{
public:
	QIF191_EXPORT CStraightnessZoneShapeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessZoneShapeType(CStraightnessZoneShapeType const& init);
	void operator=(CStraightnessZoneShapeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessZoneShapeType); }
	MemberElement<t::CStraightnessDiametricalZoneType, _altova_mi_t_altova_CStraightnessZoneShapeType_altova_DiametricalZone> DiametricalZone;
	struct DiametricalZone { typedef Iterator<t::CStraightnessDiametricalZoneType> iterator; };
	MemberElement<t::CStraightnessNonDiametricalZoneType, _altova_mi_t_altova_CStraightnessZoneShapeType_altova_NonDiametricalZone> NonDiametricalZone;
	struct NonDiametricalZone { typedef Iterator<t::CStraightnessNonDiametricalZoneType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessZoneShapeType
