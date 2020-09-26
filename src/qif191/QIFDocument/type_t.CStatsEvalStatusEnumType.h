#pragma once



namespace qif191
{

namespace t
{	

class CStatsEvalStatusEnumType : public TypeBase
{
public:
	QIF191_EXPORT CStatsEvalStatusEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CStatsEvalStatusEnumType(CStatsEvalStatusEnumType const& init);
	void operator=(CStatsEvalStatusEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CStatsEvalStatusEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_PASS = 0, // PASS
		k_FAIL = 1, // FAIL
		k_INFORMATIONAL = 2, // INFORMATIONAL
		k_UNDEFINED = 3, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CStatsEvalStatusEnumType
