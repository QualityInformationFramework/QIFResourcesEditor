#pragma once



namespace qif191
{

namespace t
{	

class CPlanePointSamplingStrategyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CPlanePointSamplingStrategyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPlanePointSamplingStrategyEnumTypeType(CPlanePointSamplingStrategyEnumTypeType const& init);
	void operator=(CPlanePointSamplingStrategyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPlanePointSamplingStrategyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ORTHOGONALGRID = 0, // ORTHOGONALGRID
		k_POLARGRID = 1, // POLARGRID
		k_SPECIFIEDGRID = 2, // SPECIFIEDGRID
		k_STRATIFIED = 3, // STRATIFIED
		k_SPIRAL = 4, // SPIRAL
		k_SPIDERWEB = 5, // SPIDERWEB
		k_POINTS = 6, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPlanePointSamplingStrategyEnumTypeType
