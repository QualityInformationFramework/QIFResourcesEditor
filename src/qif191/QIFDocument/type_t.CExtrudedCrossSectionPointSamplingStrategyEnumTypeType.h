#pragma once



namespace qif191
{

namespace t
{	

class CExtrudedCrossSectionPointSamplingStrategyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CExtrudedCrossSectionPointSamplingStrategyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtrudedCrossSectionPointSamplingStrategyEnumTypeType(CExtrudedCrossSectionPointSamplingStrategyEnumTypeType const& init);
	void operator=(CExtrudedCrossSectionPointSamplingStrategyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtrudedCrossSectionPointSamplingStrategyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_BIRDCAGE = 0, // BIRDCAGE
		k_STRATIFIED = 1, // STRATIFIED
		k_POINTS = 2, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtrudedCrossSectionPointSamplingStrategyEnumTypeType
