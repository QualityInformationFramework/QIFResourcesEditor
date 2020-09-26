#pragma once



namespace qif191
{

namespace t
{	

class CCriterionDecimalType : public TypeBase
{
public:
	QIF191_EXPORT CCriterionDecimalType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionDecimalType(CCriterionDecimalType const& init);
	void operator=(CCriterionDecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionDecimalType); }
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CCriterionDecimalType_altova_Limit> Limit;
	struct Limit { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<t::CLimitingNumberType, _altova_mi_t_altova_CCriterionDecimalType_altova_NumberAllowedExceptions> NumberAllowedExceptions;
	struct NumberAllowedExceptions { typedef Iterator<t::CLimitingNumberType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_t_altova_CCriterionDecimalType_altova_ExtremeLimit> ExtremeLimit;
	struct ExtremeLimit { typedef Iterator<xs::CdecimalType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionDecimalType
