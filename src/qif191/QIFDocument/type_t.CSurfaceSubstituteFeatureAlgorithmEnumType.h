#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceSubstituteFeatureAlgorithmEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceSubstituteFeatureAlgorithmEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceSubstituteFeatureAlgorithmEnumType(CSurfaceSubstituteFeatureAlgorithmEnumType const& init);
	void operator=(CSurfaceSubstituteFeatureAlgorithmEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSurfaceSubstituteFeatureAlgorithmEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_LEASTSQUARES = 0, // LEASTSQUARES
		k_BEZIER = 1, // BEZIER
		k_NURBS = 2, // NURBS
		k_MINMAX = 3, // MINMAX
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceSubstituteFeatureAlgorithmEnumType
