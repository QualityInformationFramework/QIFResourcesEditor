#pragma once



namespace qif191
{

namespace t
{	

class CSubgroupStatsValuesEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSubgroupStatsValuesEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSubgroupStatsValuesEnumType(CSubgroupStatsValuesEnumType const& init);
	void operator=(CSubgroupStatsValuesEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSubgroupStatsValuesEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_TOTNUM = 0, // TOTNUM
		k_EFFNUM = 1, // EFFNUM
		k_AVG = 2, // AVG
		k_DIFF = 3, // DIFF
		k_MAX = 4, // MAX
		k_MIN = 5, // MIN
		k_RANGE = 6, // RANGE
		k_NUMOOT = 7, // NUMOOT
		k_NOOTHI = 8, // NOOTHI
		k_NOOTLO = 9, // NOOTLO
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSubgroupStatsValuesEnumType
