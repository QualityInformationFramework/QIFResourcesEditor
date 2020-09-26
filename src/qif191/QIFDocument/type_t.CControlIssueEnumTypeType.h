#pragma once



namespace qif191
{

namespace t
{	

class CControlIssueEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CControlIssueEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CControlIssueEnumTypeType(CControlIssueEnumTypeType const& init);
	void operator=(CControlIssueEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CControlIssueEnumTypeType); }

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

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CControlIssueEnumTypeType
