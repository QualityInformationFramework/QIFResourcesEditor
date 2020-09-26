#pragma once



namespace qif191
{

namespace t
{	

class CToleranceZonePerUnitLengthType : public TypeBase
{
public:
	QIF191_EXPORT CToleranceZonePerUnitLengthType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CToleranceZonePerUnitLengthType(CToleranceZonePerUnitLengthType const& init);
	void operator=(CToleranceZonePerUnitLengthType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CToleranceZonePerUnitLengthType); }
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CToleranceZonePerUnitLengthType_altova_ToleranceValuePerUnit> ToleranceValuePerUnit;
	struct ToleranceValuePerUnit { typedef Iterator<t::CLinearValueType> iterator; };
	MemberElement<t::CLinearValueType, _altova_mi_t_altova_CToleranceZonePerUnitLengthType_altova_UnitLength> UnitLength;
	struct UnitLength { typedef Iterator<t::CLinearValueType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CToleranceZonePerUnitLengthType
