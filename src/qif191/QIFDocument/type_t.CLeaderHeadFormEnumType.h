#pragma once



namespace qif191
{

namespace t
{	

class CLeaderHeadFormEnumType : public TypeBase
{
public:
	QIF191_EXPORT CLeaderHeadFormEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CLeaderHeadFormEnumType(CLeaderHeadFormEnumType const& init);
	void operator=(CLeaderHeadFormEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CLeaderHeadFormEnumType); }

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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CLeaderHeadFormEnumType
