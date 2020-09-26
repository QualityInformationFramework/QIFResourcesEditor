#pragma once



namespace qif191
{

namespace t
{	

class CPositionNonDiametricalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CPositionNonDiametricalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionNonDiametricalZoneType(CPositionNonDiametricalZoneType const& init);
	void operator=(CPositionNonDiametricalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionNonDiametricalZoneType); }
	MemberElement<t::CDimensionCountEnumTypeType, _altova_mi_t_altova_CPositionNonDiametricalZoneType_altova_Dimensionality> Dimensionality;
	struct Dimensionality { typedef Iterator<t::CDimensionCountEnumTypeType> iterator; };
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_CPositionNonDiametricalZoneType_altova_ZoneOrientationVector> ZoneOrientationVector;
	struct ZoneOrientationVector { typedef Iterator<t::CUnitVectorType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_t_altova_CPositionNonDiametricalZoneType_altova_BoundaryZone> BoundaryZone;
	struct BoundaryZone { typedef Iterator<xs::CbooleanType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionNonDiametricalZoneType
