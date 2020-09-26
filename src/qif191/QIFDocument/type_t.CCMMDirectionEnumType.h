#pragma once



namespace qif191
{

namespace t
{	

class CCMMDirectionEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCMMDirectionEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCMMDirectionEnumType(CCMMDirectionEnumType const& init);
	void operator=(CCMMDirectionEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCMMDirectionEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_RIGHT = 0, // RIGHT
		k_LEFT = 1, // LEFT
		k_FRONT = 2, // FRONT
		k_BACK = 3, // BACK
		k_UP = 4, // UP
		k_DOWN = 5, // DOWN
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCMMDirectionEnumType
