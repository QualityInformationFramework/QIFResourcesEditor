#pragma once



namespace qif191
{

namespace t
{	

class CCameraFormEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCameraFormEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCameraFormEnumType(CCameraFormEnumType const& init);
	void operator=(CCameraFormEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCameraFormEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_ORTHOGRAPHIC = 0, // ORTHOGRAPHIC
		k_PERSPECTIVE = 1, // PERSPECTIVE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCameraFormEnumType
