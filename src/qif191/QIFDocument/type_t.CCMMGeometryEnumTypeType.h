#pragma once



namespace qif191
{

namespace t
{	

class CCMMGeometryEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCMMGeometryEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMGeometryEnumTypeType(CCMMGeometryEnumTypeType const& init);
	void operator=(CCMMGeometryEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCMMGeometryEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_CANTILEVER = 0, // CANTILEVER
		k_BRIDGEMOVINGBRIDGE = 1, // BRIDGEMOVINGBRIDGE
		k_BRIDGEMOVINGTABLE = 2, // BRIDGEMOVINGTABLE
		k_COLUMN = 3, // COLUMN
		k_GANTRY = 4, // GANTRY
		k_HORIZONTALARMMOVINGARM = 5, // HORIZONTALARMMOVINGARM
		k_HORIZONTALARMMOVINGTABLE = 6, // HORIZONTALARMMOVINGTABLE
		k_ARTICULATEDARM = 7, // ARTICULATEDARM
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMGeometryEnumTypeType
