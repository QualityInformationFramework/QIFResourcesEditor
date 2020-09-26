#pragma once



namespace qif191
{

namespace t
{	

class CPositionSphericalZoneType : public TypeBase
{
public:
	QIF191_EXPORT CPositionSphericalZoneType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionSphericalZoneType(CPositionSphericalZoneType const& init);
	void operator=(CPositionSphericalZoneType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionSphericalZoneType); }
	MemberElement<t::CDimensionCountEnumTypeType, _altova_mi_t_altova_CPositionSphericalZoneType_altova_Dimensionality> Dimensionality;
	struct Dimensionality { typedef Iterator<t::CDimensionCountEnumTypeType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionSphericalZoneType
