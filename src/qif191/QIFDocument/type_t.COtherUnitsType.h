#pragma once



namespace qif191
{

namespace t
{	

class COtherUnitsType : public TypeBase
{
public:
	QIF191_EXPORT COtherUnitsType(xercesc::DOMNode* const& init);
	QIF191_EXPORT COtherUnitsType(COtherUnitsType const& init);
	void operator=(COtherUnitsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_COtherUnitsType); }
	MemberElement<t::CAreaUnitType, _altova_mi_t_altova_COtherUnitsType_altova_AreaUnit> AreaUnit;
	struct AreaUnit { typedef Iterator<t::CAreaUnitType> iterator; };
	MemberElement<t::CAngularUnitType, _altova_mi_t_altova_COtherUnitsType_altova_AngularUnit> AngularUnit;
	struct AngularUnit { typedef Iterator<t::CAngularUnitType> iterator; };
	MemberElement<t::CForceUnitType, _altova_mi_t_altova_COtherUnitsType_altova_ForceUnit> ForceUnit;
	struct ForceUnit { typedef Iterator<t::CForceUnitType> iterator; };
	MemberElement<t::CLinearUnitType, _altova_mi_t_altova_COtherUnitsType_altova_LinearUnit> LinearUnit;
	struct LinearUnit { typedef Iterator<t::CLinearUnitType> iterator; };
	MemberElement<t::CMassUnitType, _altova_mi_t_altova_COtherUnitsType_altova_MassUnit> MassUnit;
	struct MassUnit { typedef Iterator<t::CMassUnitType> iterator; };
	MemberElement<t::CPressureUnitType, _altova_mi_t_altova_COtherUnitsType_altova_PressureUnit> PressureUnit;
	struct PressureUnit { typedef Iterator<t::CPressureUnitType> iterator; };
	MemberElement<t::CSpeedUnitType, _altova_mi_t_altova_COtherUnitsType_altova_SpeedUnit> SpeedUnit;
	struct SpeedUnit { typedef Iterator<t::CSpeedUnitType> iterator; };
	MemberElement<t::CTemperatureUnitType, _altova_mi_t_altova_COtherUnitsType_altova_TemperatureUnit> TemperatureUnit;
	struct TemperatureUnit { typedef Iterator<t::CTemperatureUnitType> iterator; };
	MemberElement<t::CTimeUnitType, _altova_mi_t_altova_COtherUnitsType_altova_TimeUnit> TimeUnit;
	struct TimeUnit { typedef Iterator<t::CTimeUnitType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_COtherUnitsType
