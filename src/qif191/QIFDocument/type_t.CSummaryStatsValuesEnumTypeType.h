#pragma once



namespace qif191
{

namespace t
{	

class CSummaryStatsValuesEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CSummaryStatsValuesEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSummaryStatsValuesEnumTypeType(CSummaryStatsValuesEnumTypeType const& init);
	void operator=(CSummaryStatsValuesEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSummaryStatsValuesEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_AVG = 0, // AVG
		k_MAX = 1, // MAX
		k_MIN = 2, // MIN
		k_RANGE = 3, // RANGE
		k_STDDEV = 4, // STDDEV
		EnumValueCount
	};

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSummaryStatsValuesEnumTypeType
