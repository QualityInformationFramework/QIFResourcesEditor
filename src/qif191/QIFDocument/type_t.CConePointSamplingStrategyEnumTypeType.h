#pragma once



namespace qif191
{

namespace t
{	

class CConePointSamplingStrategyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CConePointSamplingStrategyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CConePointSamplingStrategyEnumTypeType(CConePointSamplingStrategyEnumTypeType const& init);
	void operator=(CConePointSamplingStrategyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CConePointSamplingStrategyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_POLARGRID = 0, // POLARGRID
		k_STRATIFIED = 1, // STRATIFIED
		k_SPIRAL = 2, // SPIRAL
		k_SPIDERWEB = 3, // SPIDERWEB
		k_POINTS = 4, // POINTS
		EnumValueCount
	};

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CConePointSamplingStrategyEnumTypeType
