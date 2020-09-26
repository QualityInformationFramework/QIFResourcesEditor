#pragma once



namespace qif191
{

namespace t
{	

class CInspectionStatusEnumType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionStatusEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionStatusEnumType(CInspectionStatusEnumType const& init);
	void operator=(CInspectionStatusEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CInspectionStatusEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PASS = 0, // PASS
		k_FAIL = 1, // FAIL
		k_REWORK = 2, // REWORK
		k_SYSERROR = 3, // SYSERROR
		k_UNKNOWN = 4, // UNKNOWN
		k_NOT_CALCULATED = 5, // NOT_CALCULATED
		k_NOT_MEASURED = 6, // NOT_MEASURED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionStatusEnumType
