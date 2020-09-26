#pragma once



namespace qif191
{

namespace t
{	

class CDiameterModifierEnumType : public TypeBase
{
public:
	QIF191_EXPORT CDiameterModifierEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDiameterModifierEnumType(CDiameterModifierEnumType const& init);
	void operator=(CDiameterModifierEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CDiameterModifierEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PD = 0, // PD
		k_MD = 1, // MD
		k_LD = 2, // LD
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDiameterModifierEnumType
