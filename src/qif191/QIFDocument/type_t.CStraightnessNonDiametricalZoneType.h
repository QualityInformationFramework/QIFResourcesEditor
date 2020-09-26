#pragma once



namespace qif191
{

namespace t
{	

class CStraightnessNonDiametricalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CStraightnessNonDiametricalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStraightnessNonDiametricalZoneType(CStraightnessNonDiametricalZoneType const& init);
	void operator=(CStraightnessNonDiametricalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStraightnessNonDiametricalZoneType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CStraightnessNonDiametricalZoneType_altova_ZoneOrientationVector> ZoneOrientationVector;
	struct ZoneOrientationVector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStraightnessNonDiametricalZoneType
