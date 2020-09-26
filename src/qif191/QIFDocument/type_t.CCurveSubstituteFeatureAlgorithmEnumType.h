#pragma once



namespace qif191
{

namespace t
{	

class CCurveSubstituteFeatureAlgorithmEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCurveSubstituteFeatureAlgorithmEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCurveSubstituteFeatureAlgorithmEnumType(CCurveSubstituteFeatureAlgorithmEnumType const& init);
	void operator=(CCurveSubstituteFeatureAlgorithmEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCurveSubstituteFeatureAlgorithmEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_LEASTSQUARES = 0, // LEASTSQUARES
		k_BSPLINE = 1, // BSPLINE
		k_MINMAX = 2, // MINMAX
		k_UNDEFINED = 3, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCurveSubstituteFeatureAlgorithmEnumType
