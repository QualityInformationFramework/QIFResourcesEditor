#pragma once



namespace qif191
{

namespace t
{	

class CTimeUnitType : public TypeBase
{
public:
	QIF191_EXPORT CTimeUnitType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeUnitType(CTimeUnitType const& init);
	void operator=(CTimeUnitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CTimeUnitType); }
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CTimeUnitType_altova_SIUnitName> SIUnitName;
	struct SIUnitName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<xs::CtokenType, _altova_mi_t_altova_CTimeUnitType_altova_UnitName> UnitName;
	struct UnitName { typedef Iterator<xs::CtokenType> iterator; };
	MemberElement<t::CUnitConversionType, _altova_mi_t_altova_CTimeUnitType_altova_UnitConversion> UnitConversion;
	struct UnitConversion { typedef Iterator<t::CUnitConversionType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeUnitType
