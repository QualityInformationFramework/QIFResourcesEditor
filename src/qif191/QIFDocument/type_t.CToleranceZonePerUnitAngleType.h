#pragma once



namespace qif191
{

namespace t
{	

class CToleranceZonePerUnitAngleType : public TypeBase
{
public:
	QIF191_EXPORT CToleranceZonePerUnitAngleType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToleranceZonePerUnitAngleType(CToleranceZonePerUnitAngleType const& init);
	void operator=(CToleranceZonePerUnitAngleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToleranceZonePerUnitAngleType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CToleranceZonePerUnitAngleType_altova_ToleranceValuePerUnit> ToleranceValuePerUnit;
	struct ToleranceValuePerUnit { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CAngularValueType, _altova_mi_t_altova_CToleranceZonePerUnitAngleType_altova_UnitAngle> UnitAngle;
	struct UnitAngle { typedef Iterator<t::CAngularValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToleranceZonePerUnitAngleType
