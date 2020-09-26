#pragma once



namespace qif191
{

namespace t
{	

class CPointSamplingStrategyEnumBaseType : public TypeBase
{
public:
	QIF191_EXPORT CPointSamplingStrategyEnumBaseType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointSamplingStrategyEnumBaseType(CPointSamplingStrategyEnumBaseType const& init);
	void operator=(CPointSamplingStrategyEnumBaseType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CPointSamplingStrategyEnumBaseType); }

	enum EnumValues {
		Invalid = -1,
		k_ORTHOGONALGRID = 0, // ORTHOGONALGRID
		k_BIRDCAGE = 1, // BIRDCAGE
		k_POLARGRID = 2, // POLARGRID
		k_SPECIFIEDGRID = 3, // SPECIFIEDGRID
		k_STRATIFIED = 4, // STRATIFIED
		k_HELIX = 5, // HELIX
		k_SPIRAL = 6, // SPIRAL
		k_SPIDERWEB = 7, // SPIDERWEB
		k_POINTS = 8, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointSamplingStrategyEnumBaseType
