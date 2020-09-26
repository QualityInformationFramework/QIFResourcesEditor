#pragma once



namespace qif191
{

namespace t
{	

class CToleranceZonePerUnitAreaType : public TypeBase
{
public:
	QIF191_EXPORT CToleranceZonePerUnitAreaType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToleranceZonePerUnitAreaType(CToleranceZonePerUnitAreaType const& init);
	void operator=(CToleranceZonePerUnitAreaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToleranceZonePerUnitAreaType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CToleranceZonePerUnitAreaType_altova_ToleranceValuePerUnit> ToleranceValuePerUnit;
	struct ToleranceValuePerUnit { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CRectangularUnitAreaType, _altova_mi_t_altova_CToleranceZonePerUnitAreaType_altova_RectangularUnitArea> RectangularUnitArea;
	struct RectangularUnitArea { typedef Iterator<t::CRectangularUnitAreaType> iterator; };
	MemberElement<t::CCircularUnitAreaType, _altova_mi_t_altova_CToleranceZonePerUnitAreaType_altova_CircularUnitArea> CircularUnitArea;
	struct CircularUnitArea { typedef Iterator<t::CCircularUnitAreaType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToleranceZonePerUnitAreaType
