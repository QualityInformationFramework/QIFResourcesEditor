#pragma once



namespace qif191
{

namespace t
{	

class CPressureUnitType : public TypeBase
{
public:
	QIF191_EXPORT CPressureUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPressureUnitType(CPressureUnitType const& init);
	void operator=(CPressureUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPressureUnitType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPressureUnitType_altova_SIUnitName> SIUnitName;
	struct SIUnitName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CPressureUnitType_altova_UnitName> UnitName;
	struct UnitName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CUnitConversionType, _altova_mi_t_altova_CPressureUnitType_altova_UnitConversion> UnitConversion;
	struct UnitConversion { typedef Iterator<t::CUnitConversionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPressureUnitType
