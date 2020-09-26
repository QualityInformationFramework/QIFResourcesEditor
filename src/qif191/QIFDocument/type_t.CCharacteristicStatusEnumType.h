#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicStatusEnumType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicStatusEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicStatusEnumType(CCharacteristicStatusEnumType const& init);
	void operator=(CCharacteristicStatusEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CCharacteristicStatusEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PASS = 0, // PASS
		k_FAIL = 1, // FAIL
		k_REWORK = 2, // REWORK
		k_SYSERROR = 3, // SYSERROR
		k_INDETERMINATE = 4, // INDETERMINATE
		k_NOT_ANALYZED = 5, // NOT_ANALYZED
		k_BASIC = 6, // BASIC
		k_UNDEFINED = 7, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicStatusEnumType
