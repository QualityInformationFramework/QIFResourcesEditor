#pragma once



namespace qif191
{

namespace t
{	

class CSecurityClassificationEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSecurityClassificationEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSecurityClassificationEnumType(CSecurityClassificationEnumType const& init);
	void operator=(CSecurityClassificationEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSecurityClassificationEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_NONE = 0, // NONE
		k_UNCLASSIFIED = 1, // UNCLASSIFIED
		k_RESTRICTED = 2, // RESTRICTED
		k_EU_RESTRICTED = 3, // EU_RESTRICTED
		k_WEU_RESTRICTED = 4, // WEU_RESTRICTED
		k_FOR_OFFICIAL_USE_ONLY = 5, // FOR_OFFICIAL_USE_ONLY
		k_PROTECTED = 6, // PROTECTED
		k_PROTECTED_A = 7, // PROTECTED_A
		k_PROTECTED_B = 8, // PROTECTED_B
		k_PROTECTED_C = 9, // PROTECTED_C
		k_CONFIDENTIAL = 10, // CONFIDENTIAL
		k_EU_CONFIDENTIAL = 11, // EU_CONFIDENTIAL
		k_WEU_CONFIDENTIAL = 12, // WEU_CONFIDENTIAL
		k_SECRET = 13, // SECRET
		k_SECRET_NATIONAL_SECURITY_INFORMATION = 14, // SECRET_NATIONAL_SECURITY_INFORMATION
		k_SECRET_FORMERLY_RESTRICTED_DATA = 15, // SECRET_FORMERLY_RESTRICTED_DATA
		k_SECRET_RESTRICTED_DATA = 16, // SECRET_RESTRICTED_DATA
		k_SECRET2 = 17, // SECRET
		k_EU_SECRET = 18, // EU_SECRET
		k_WEU_SECRET = 19, // WEU_SECRET
		k_TOP_SECRET_NATIONAL_SECURITY_INFORMATION = 20, // TOP_SECRET_NATIONAL_SECURITY_INFORMATION
		k_TOP_SECRET_FORMERLY_RESTRICTED_DATA = 21, // TOP_SECRET_FORMERLY_RESTRICTED_DATA
		k_TOP_SECRET_RESTRICTED_DATA = 22, // TOP_SECRET_RESTRICTED_DATA
		k_EU_TOP_SECRET = 23, // EU_TOP_SECRET
		k_FOCAL_TOP_SECRET = 24, // FOCAL_TOP_SECRET
		k_COMPANY_CONFIDENTIAL = 25, // COMPANY_CONFIDENTIAL
		k_OFFICAL_USE_ONLY = 26, // OFFICAL_USE_ONLY
		k_TRADE_SECRET = 27, // TRADE_SECRET
		k_TRADEMARK = 28, // TRADEMARK
		k_REGISTERED_TRADEMARK = 29, // REGISTERED_TRADEMARK
		k_PATENT = 30, // PATENT
		k_UNDEFINED = 31, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSecurityClassificationEnumType
