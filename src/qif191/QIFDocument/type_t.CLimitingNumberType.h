#pragma once



namespace qif191
{

namespace t
{	

class CLimitingNumberType : public TypeBase
{
public:
	QIF191_EXPORT CLimitingNumberType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLimitingNumberType(CLimitingNumberType const& init);
	void operator=(CLimitingNumberType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLimitingNumberType); }
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_t_altova_CLimitingNumberType_altova_Count> Count;
	struct Count { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CLimitingNumberType_altova_Fraction> Fraction;
	struct Fraction { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLimitingNumberType
