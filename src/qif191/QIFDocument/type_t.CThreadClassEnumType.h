#pragma once



namespace qif191
{

namespace t
{	

class CThreadClassEnumType : public TypeBase
{
public:
	QIF191_EXPORT CThreadClassEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CThreadClassEnumType(CThreadClassEnumType const& init);
	void operator=(CThreadClassEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CThreadClassEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_1A = 0, // 1A
		k_1B = 1, // 1B
		k_2A = 2, // 2A
		k_2AG = 3, // 2AG
		k_2B = 4, // 2B
		k_3A = 5, // 3A
		k_3B = 6, // 3B
		k_EXT_3E = 7, // EXT_3E
		k_EXT_3F = 8, // EXT_3F
		k_EXT_3G = 9, // EXT_3G
		k_EXT_3H = 10, // EXT_3H
		k_EXT_4E = 11, // EXT_4E
		k_EXT_4F = 12, // EXT_4F
		k_EXT_4G = 13, // EXT_4G
		k_EXT_4H = 14, // EXT_4H
		k_4G = 15, // 4G
		k_4H = 16, // 4H
		k_EXT_5E = 17, // EXT_5E
		k_EXT_5F = 18, // EXT_5F
		k_EXT_5G = 19, // EXT_5G
		k_EXT_5H = 20, // EXT_5H
		k_5G = 21, // 5G
		k_5H = 22, // 5H
		k_EXT_6E = 23, // EXT_6E
		k_EXT_6F = 24, // EXT_6F
		k_EXT_6G = 25, // EXT_6G
		k_EXT_6H = 26, // EXT_6H
		k_6G = 27, // 6G
		k_6H = 28, // 6H
		k_EXT_7E = 29, // EXT_7E
		k_EXT_7F = 30, // EXT_7F
		k_EXT_7G = 31, // EXT_7G
		k_EXT_7H = 32, // EXT_7H
		k_7G = 33, // 7G
		k_7H = 34, // 7H
		k_EXT_8E = 35, // EXT_8E
		k_EXT_8F = 36, // EXT_8F
		k_EXT_8G = 37, // EXT_8G
		k_EXT_8H = 38, // EXT_8H
		k_8G = 39, // 8G
		k_8H = 40, // 8H
		k_EXT_9E = 41, // EXT_9E
		k_EXT_9F = 42, // EXT_9F
		k_EXT_9G = 43, // EXT_9G
		k_EXT_9H = 44, // EXT_9H
		k_INT = 45, // INT
		k_EXT = 46, // EXT
		k_SE = 47, // SE
		k_G = 48, // G
		k_UNDEFINED = 49, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CThreadClassEnumType
