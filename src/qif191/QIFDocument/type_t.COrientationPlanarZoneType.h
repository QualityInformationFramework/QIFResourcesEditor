#pragma once



namespace qif191
{

namespace t
{	

class COrientationPlanarZoneType : public TypeBase
{
public:
	QIF191_EXPORT COrientationPlanarZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COrientationPlanarZoneType(COrientationPlanarZoneType const& init);
	void operator=(COrientationPlanarZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COrientationPlanarZoneType); }
	MemberElement<t::CUnitVectorType, _altova_mi_t_altova_COrientationPlanarZoneType_altova_ZoneOrientationVector> ZoneOrientationVector;
	struct ZoneOrientationVector { typedef Iterator<t::CUnitVectorType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COrientationPlanarZoneType
