#pragma once



namespace qif191
{

namespace t
{	

class CStringValuesType : public TypeBase
{
public:
	QIF191_EXPORT CStringValuesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStringValuesType(CStringValuesType const& init);
	void operator=(CStringValuesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CStringValuesType); }
	MemberElement<xs::CstringType, _altova_mi_t_altova_CStringValuesType_altova_StringValue> StringValue;
	struct StringValue { typedef Iterator<xs::CstringType> iterator; };
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStringValuesType
