#pragma once



namespace qif191
{

namespace t
{	

class CSurfaceOfRevolutionPointSamplingStrategyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSurfaceOfRevolutionPointSamplingStrategyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSurfaceOfRevolutionPointSamplingStrategyEnumType(CSurfaceOfRevolutionPointSamplingStrategyEnumType const& init);
	void operator=(CSurfaceOfRevolutionPointSamplingStrategyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSurfaceOfRevolutionPointSamplingStrategyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ORTHOGONALGRID = 0, // ORTHOGONALGRID
		k_BIRDCAGE = 1, // BIRDCAGE
		k_SPECIFIEDGRID = 2, // SPECIFIEDGRID
		k_STRATIFIED = 3, // STRATIFIED
		k_HELIX = 4, // HELIX
		k_POINTS = 5, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSurfaceOfRevolutionPointSamplingStrategyEnumType
