#pragma once



namespace qif191
{

namespace t
{	

class CExtentEnumType : public TypeBase
{
public:
	QIF191_EXPORT CExtentEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtentEnumType(CExtentEnumType const& init);
	void operator=(CExtentEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CExtentEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ALLOVER = 0, // ALLOVER
		k_ALLAROUND = 1, // ALLAROUND
		k_ALLOVERTHISSIDE = 2, // ALLOVERTHISSIDE
		k_ALLAROUNDTHISSIDE = 3, // ALLAROUNDTHISSIDE
		k_UNDEFINED = 4, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtentEnumType
