#pragma once



namespace qif191
{

namespace t
{	

class CFeatureOfSizeSubstituteFeatureAlgorithmEnumType : public TypeBase
{
public:
	QIF191_EXPORT CFeatureOfSizeSubstituteFeatureAlgorithmEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CFeatureOfSizeSubstituteFeatureAlgorithmEnumType(CFeatureOfSizeSubstituteFeatureAlgorithmEnumType const& init);
	void operator=(CFeatureOfSizeSubstituteFeatureAlgorithmEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CFeatureOfSizeSubstituteFeatureAlgorithmEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_LEASTSQUARES = 0, // LEASTSQUARES
		k_MINMAX = 1, // MINMAX
		k_MINCIRCUMSCRIBED = 2, // MINCIRCUMSCRIBED
		k_MAXINSCRIBED = 3, // MAXINSCRIBED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CFeatureOfSizeSubstituteFeatureAlgorithmEnumType
