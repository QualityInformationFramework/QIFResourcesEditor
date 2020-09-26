#pragma once



namespace qif191
{

namespace t
{	

class CDimensionModifierEnumType : public TypeBase
{
public:
	QIF191_EXPORT CDimensionModifierEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDimensionModifierEnumType(CDimensionModifierEnumType const& init);
	void operator=(CDimensionModifierEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CDimensionModifierEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_BASIC = 0, // BASIC
		k_SET = 1, // SET
		k_REFERENCE = 2, // REFERENCE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDimensionModifierEnumType
