#pragma once



namespace qif191
{

namespace t
{	

class CLeaderHeadFormEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CLeaderHeadFormEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderHeadFormEnumTypeType(CLeaderHeadFormEnumTypeType const& init);
	void operator=(CLeaderHeadFormEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CLeaderHeadFormEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ARROW_OPEN = 0, // ARROW_OPEN
		k_ARROW_UNFILLED = 1, // ARROW_UNFILLED
		k_ARROW_BLANKED = 2, // ARROW_BLANKED
		k_ARROW_FILLED = 3, // ARROW_FILLED
		k_TRIANGLE_BLANKED = 4, // TRIANGLE_BLANKED
		k_TRIANGLE_FILLED = 5, // TRIANGLE_FILLED
		k_DOT_BLANKED = 6, // DOT_BLANKED
		k_DOT_FILLED = 7, // DOT_FILLED
		k_BOX_BLANKED = 8, // BOX_BLANKED
		k_BOX_FILLED = 9, // BOX_FILLED
		k_DIMENSION_ORIGIN = 10, // DIMENSION_ORIGIN
		k_SYMBOL_SLASH = 11, // SYMBOL_SLASH
		k_SYMBOL_INTEGRAL = 12, // SYMBOL_INTEGRAL
		k_SYMBOL_CROSS = 13, // SYMBOL_CROSS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderHeadFormEnumTypeType
