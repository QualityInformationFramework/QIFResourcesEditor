#pragma once



namespace qif191
{

namespace t
{	

class CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType : public TypeBase
{
public:
	QIF191_EXPORT CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType(CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType const& init);
	void operator=(CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_LEASTSQUARES = 0, // LEASTSQUARES
		k_MINMAX = 1, // MINMAX
		k_UNDEFINED = 2, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CNonFeatureOfSizeSubstituteFeatureAlgorithmEnumType
