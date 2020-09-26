#pragma once



namespace qif191
{

namespace t
{	

class CControlIssueEnumType : public TypeBase
{
public:
	QIF191_EXPORT CControlIssueEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CControlIssueEnumType(CControlIssueEnumType const& init);
	void operator=(CControlIssueEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CControlIssueEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_OOT = 0, // OOT
		k_CP = 1, // CP
		k_CPK = 2, // CPK
		k_PP = 3, // PP
		k_PPK = 4, // PPK
		k_OOC = 5, // OOC
		k_TRENDING = 6, // TRENDING
		k_SKEWED = 7, // SKEWED
		k_ONETHIRDGROUPED = 8, // ONETHIRDGROUPED
		k_TWOTHIRDGROUPED = 9, // TWOTHIRDGROUPED
		k_OSCILLATING = 10, // OSCILLATING
		k_STRATIFIED = 11, // STRATIFIED
		k_OOCRNG = 12, // OOCRNG
		k_UNDEFINED = 13, // UNDEFINED
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CControlIssueEnumType
