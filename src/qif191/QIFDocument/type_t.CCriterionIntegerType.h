#pragma once



namespace qif191
{

namespace t
{	

class CCriterionIntegerType : public TypeBase
{
public:
	QIF191_EXPORT CCriterionIntegerType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCriterionIntegerType(CCriterionIntegerType const& init);
	void operator=(CCriterionIntegerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCriterionIntegerType); }
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCriterionIntegerType_altova_Limit> Limit;
	struct Limit { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	MemberElement<t::CLimitingNumberType, _altova_mi_t_altova_CCriterionIntegerType_altova_NumberAllowedExceptions> NumberAllowedExceptions;
	struct NumberAllowedExceptions { typedef Iterator<t::CLimitingNumberType> iterator; };
	MemberElement<xs::CpositiveIntegerType, _altova_mi_t_altova_CCriterionIntegerType_altova_ExtremeLimit> ExtremeLimit;
	struct ExtremeLimit { typedef Iterator<xs::CpositiveIntegerType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCriterionIntegerType
