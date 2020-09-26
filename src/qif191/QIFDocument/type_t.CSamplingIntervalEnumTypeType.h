#pragma once



namespace qif191
{

namespace t
{	

class CSamplingIntervalEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CSamplingIntervalEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSamplingIntervalEnumTypeType(CSamplingIntervalEnumTypeType const& init);
	void operator=(CSamplingIntervalEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSamplingIntervalEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_SHIFT = 0, // SHIFT
		k_DAY = 1, // DAY
		k_HOUR = 2, // HOUR
		k_WEEK = 3, // WEEK
		k_MONTH = 4, // MONTH
		k_BATCH = 5, // BATCH
		k_LOT = 6, // LOT
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSamplingIntervalEnumTypeType
