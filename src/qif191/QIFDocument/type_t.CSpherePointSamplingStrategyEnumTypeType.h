#pragma once



namespace qif191
{

namespace t
{	

class CSpherePointSamplingStrategyEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CSpherePointSamplingStrategyEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSpherePointSamplingStrategyEnumTypeType(CSpherePointSamplingStrategyEnumTypeType const& init);
	void operator=(CSpherePointSamplingStrategyEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSpherePointSamplingStrategyEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ORTHOGONALGRID = 0, // ORTHOGONALGRID
		k_SPECIFIEDGRID = 1, // SPECIFIEDGRID
		k_STRATIFIED = 2, // STRATIFIED
		k_HELIX = 3, // HELIX
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSpherePointSamplingStrategyEnumTypeType
