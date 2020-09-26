#pragma once



namespace qif191
{

namespace t
{	

class CConePointSamplingStrategyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CConePointSamplingStrategyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConePointSamplingStrategyEnumType(CConePointSamplingStrategyEnumType const& init);
	void operator=(CConePointSamplingStrategyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CConePointSamplingStrategyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_POLARGRID = 0, // POLARGRID
		k_STRATIFIED = 1, // STRATIFIED
		k_SPIRAL = 2, // SPIRAL
		k_SPIDERWEB = 3, // SPIDERWEB
		k_POINTS = 4, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConePointSamplingStrategyEnumType
