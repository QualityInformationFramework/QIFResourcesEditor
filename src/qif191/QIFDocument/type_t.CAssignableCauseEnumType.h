#pragma once



namespace qif191
{

namespace t
{	

class CAssignableCauseEnumType : public TypeBase
{
public:
	QIF191_EXPORT CAssignableCauseEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssignableCauseEnumType(CAssignableCauseEnumType const& init);
	void operator=(CAssignableCauseEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CAssignableCauseEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_POWER_FAILURE = 0, // POWER_FAILURE
		k_BROKEN_TOOL = 1, // BROKEN_TOOL
		k_COMPUTER_CRASH = 2, // COMPUTER_CRASH
		k_WEATHER_EVENT = 3, // WEATHER_EVENT
		k_OTHER = 4, // OTHER
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssignableCauseEnumType
