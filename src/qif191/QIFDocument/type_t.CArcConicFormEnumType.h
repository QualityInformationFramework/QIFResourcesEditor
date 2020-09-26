#pragma once



namespace qif191
{

namespace t
{	

class CArcConicFormEnumType : public TypeBase
{
public:
	QIF191_EXPORT CArcConicFormEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CArcConicFormEnumType(CArcConicFormEnumType const& init);
	void operator=(CArcConicFormEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CArcConicFormEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PARABOLA = 0, // PARABOLA
		k_ELLIPSE = 1, // ELLIPSE
		k_HYPERBOLA = 2, // HYPERBOLA
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CArcConicFormEnumType
