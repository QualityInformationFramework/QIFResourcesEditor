#pragma once



namespace qif191
{

namespace t
{	

class CAddressDescriptionEnumType : public TypeBase
{
public:
	QIF191_EXPORT CAddressDescriptionEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAddressDescriptionEnumType(CAddressDescriptionEnumType const& init);
	void operator=(CAddressDescriptionEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CAddressDescriptionEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_DELIVERY = 0, // DELIVERY
		k_POSTAL = 1, // POSTAL
		k_VISITOR = 2, // VISITOR
		k_NOTDEFINED = 3, // NOTDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAddressDescriptionEnumType
