#pragma once



namespace qif191
{

namespace t
{	

class CUnitConversionType : public TypeBase
{
public:
	QIF191_EXPORT CUnitConversionType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CUnitConversionType(CUnitConversionType const& init);
	void operator=(CUnitConversionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CUnitConversionType); }
	MemberElement<t::CPositiveDecimalTypeType, _altova_mi_t_altova_CUnitConversionType_altova_Factor> Factor;
	struct Factor { typedef Iterator<t::CPositiveDecimalTypeType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CUnitConversionType_altova_Offset> Offset;
	struct Offset { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CUnitConversionType
