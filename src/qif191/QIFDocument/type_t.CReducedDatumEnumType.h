#pragma once



namespace qif191
{

namespace t
{	

class CReducedDatumEnumType : public TypeBase
{
public:
	QIF191_EXPORT CReducedDatumEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CReducedDatumEnumType(CReducedDatumEnumType const& init);
	void operator=(CReducedDatumEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CReducedDatumEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PT = 0, // PT
		k_SL = 1, // SL
		k_PL = 2, // PL
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CReducedDatumEnumType
