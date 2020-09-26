#pragma once



namespace qif191
{

namespace t
{	

class CTimeDescriptionEnumType : public TypeBase
{
public:
	QIF191_EXPORT CTimeDescriptionEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTimeDescriptionEnumType(CTimeDescriptionEnumType const& init);
	void operator=(CTimeDescriptionEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CTimeDescriptionEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_INSPECTION_START = 0, // INSPECTION_START
		k_INSPECTION_END = 1, // INSPECTION_END
		k_INTERMEDIATE = 2, // INTERMEDIATE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTimeDescriptionEnumType
