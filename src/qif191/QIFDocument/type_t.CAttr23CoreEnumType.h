#pragma once



namespace qif191
{

namespace t
{	

class CAttr23CoreEnumType : public TypeBase
{
public:
	QIF191_EXPORT CAttr23CoreEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAttr23CoreEnumType(CAttr23CoreEnumType const& init);
	void operator=(CAttr23CoreEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CAttr23CoreEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_FREEFORM = 0, // FREEFORM
		k_CYLINDER = 1, // CYLINDER
		k_CONE = 2, // CONE
		k_TORUS = 3, // TORUS
		k_SPHERE = 4, // SPHERE
		k_PLANE = 5, // PLANE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAttr23CoreEnumType
