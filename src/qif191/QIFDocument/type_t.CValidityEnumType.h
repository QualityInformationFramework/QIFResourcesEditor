#pragma once



namespace qif191
{

namespace t
{	

class CValidityEnumType : public TypeBase
{
public:
	QIF191_EXPORT CValidityEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CValidityEnumType(CValidityEnumType const& init);
	void operator=(CValidityEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CValidityEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_REPORTED = 0, // REPORTED
		k_DUMMY = 1, // DUMMY
		k_MOOT = 2, // MOOT
		k_DERIVED = 3, // DERIVED
		k_SET = 4, // SET
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CValidityEnumType
