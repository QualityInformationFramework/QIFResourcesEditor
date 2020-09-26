#pragma once



namespace qif191
{

namespace t
{	

class CDegreeOfFreedomEnumType : public TypeBase
{
public:
	QIF191_EXPORT CDegreeOfFreedomEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDegreeOfFreedomEnumType(CDegreeOfFreedomEnumType const& init);
	void operator=(CDegreeOfFreedomEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CDegreeOfFreedomEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_U = 0, // U
		k_V = 1, // V
		k_W = 2, // W
		k_X = 3, // X
		k_Y = 4, // Y
		k_Z = 5, // Z
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDegreeOfFreedomEnumType
