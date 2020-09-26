#pragma once



namespace qif191
{

namespace t
{	

class CCMMGeometryEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCMMGeometryEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMGeometryEnumType(CCMMGeometryEnumType const& init);
	void operator=(CCMMGeometryEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCMMGeometryEnumType); }

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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMGeometryEnumType
