#pragma once



namespace qif191
{

namespace t
{	

class CBooleanExpressionBaseType : public TypeBase
{
public:
	QIF191_EXPORT CBooleanExpressionBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBooleanExpressionBaseType(CBooleanExpressionBaseType const& init);
	void operator=(CBooleanExpressionBaseType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CBooleanExpressionBaseType); }
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBooleanExpressionBaseType
