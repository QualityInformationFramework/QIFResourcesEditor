#pragma once



namespace qif191
{

namespace t
{	

class CPrecedenceEnumType : public TypeBase
{
public:
	QIF191_EXPORT CPrecedenceEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPrecedenceEnumType(CPrecedenceEnumType const& init);
	void operator=(CPrecedenceEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CPrecedenceEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PRIMARY = 0, // PRIMARY
		k_SECONDARY = 1, // SECONDARY
		k_TERTIARY = 2, // TERTIARY
		k_QUATERNARY = 3, // QUATERNARY
		k_QUINARY = 4, // QUINARY
		k_SENARY = 5, // SENARY
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPrecedenceEnumType
