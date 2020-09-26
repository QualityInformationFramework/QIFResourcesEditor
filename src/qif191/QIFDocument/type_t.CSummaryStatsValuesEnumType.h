#pragma once



namespace qif191
{

namespace t
{	

class CSummaryStatsValuesEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSummaryStatsValuesEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatsValuesEnumType(CSummaryStatsValuesEnumType const& init);
	void operator=(CSummaryStatsValuesEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSummaryStatsValuesEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_AVG = 0, // AVG
		k_MAX = 1, // MAX
		k_MIN = 2, // MIN
		k_RANGE = 3, // RANGE
		k_STDDEV = 4, // STDDEV
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatsValuesEnumType
