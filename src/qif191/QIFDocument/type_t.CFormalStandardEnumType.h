#pragma once



namespace qif191
{

namespace t
{	

class CFormalStandardEnumType : public TypeBase
{
public:
	QIF191_EXPORT CFormalStandardEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFormalStandardEnumType(CFormalStandardEnumType const& init);
	void operator=(CFormalStandardEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CFormalStandardEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ANSI = 0, // ANSI
		k_ASME_Y14_5_1982 = 1, // ASME-Y14.5-1982
		k_ASME_Y14_5_1994 = 2, // ASME-Y14.5-1994
		k_ASME_Y14_5_2009 = 3, // ASME-Y14.5-2009
		k_ISO1101_1983 = 4, // ISO1101:1983
		k_ISO1101_2004 = 5, // ISO1101:2004
		k_ISO1101_2012 = 6, // ISO1101:2012
		k_BIS = 7, // BIS
		k_JIS = 8, // JIS
		k_DIN = 9, // DIN
		k_COMPANY = 10, // COMPANY
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFormalStandardEnumType
