#pragma once



namespace qif191
{

namespace t
{	

class CShapeClassEnumType : public TypeBase
{
public:
	QIF191_EXPORT CShapeClassEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CShapeClassEnumType(CShapeClassEnumType const& init);
	void operator=(CShapeClassEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CShapeClassEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_GEAR = 0, // GEAR
		k_FREEFORM = 1, // FREEFORM
		k_PRISMATIC = 2, // PRISMATIC
		k_ROTATIONAL = 3, // ROTATIONAL
		k_THINWALLED = 4, // THINWALLED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CShapeClassEnumType
