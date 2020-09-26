#pragma once



namespace qif191
{

namespace t
{	

class CManufacturingMethodEnumType : public TypeBase
{
public:
	QIF191_EXPORT CManufacturingMethodEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CManufacturingMethodEnumType(CManufacturingMethodEnumType const& init);
	void operator=(CManufacturingMethodEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CManufacturingMethodEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ADDITIVE = 0, // ADDITIVE
		k_CASTING = 1, // CASTING
		k_COMPOSITE = 2, // COMPOSITE
		k_FABRICATION = 3, // FABRICATION
		k_FORMING = 4, // FORMING
		k_JOINING = 5, // JOINING
		k_MACHINING = 6, // MACHINING
		k_MOLDING = 7, // MOLDING
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CManufacturingMethodEnumType
