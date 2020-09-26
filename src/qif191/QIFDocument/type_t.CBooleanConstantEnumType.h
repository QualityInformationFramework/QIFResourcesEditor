#pragma once



namespace qif191
{

namespace t
{	

class CBooleanConstantEnumType : public TypeBase
{
public:
	QIF191_EXPORT CBooleanConstantEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CBooleanConstantEnumType(CBooleanConstantEnumType const& init);
	void operator=(CBooleanConstantEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CBooleanConstantEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_QIF_TRUE = 0, // QIF_TRUE
		k_QIF_FALSE = 1, // QIF_FALSE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CBooleanConstantEnumType
