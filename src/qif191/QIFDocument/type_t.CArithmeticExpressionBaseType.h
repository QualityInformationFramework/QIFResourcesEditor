#pragma once



namespace qif191
{

namespace t
{	

class CArithmeticExpressionBaseType : public TypeBase
{
public:
	QIF191_EXPORT CArithmeticExpressionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArithmeticExpressionBaseType(CArithmeticExpressionBaseType const& init);
	void operator=(CArithmeticExpressionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CArithmeticExpressionBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArithmeticExpressionBaseType
