#pragma once



namespace qif191
{

namespace t
{	

class CCriterionOutOfType : public TypeBase
{
public:
	QIF191_EXPORT CCriterionOutOfType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionOutOfType(CCriterionOutOfType const& init);
	void operator=(CCriterionOutOfType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionOutOfType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCriterionOutOfType_altova_Numerator> Numerator;
	struct Numerator { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCriterionOutOfType_altova_Denominator> Denominator;
	struct Denominator { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CLimitingNumberType, _altova_mi_t_altova_CCriterionOutOfType_altova_NumberAllowedExceptions> NumberAllowedExceptions;
	struct NumberAllowedExceptions { typedef Iterator<t::CLimitingNumberType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionOutOfType
