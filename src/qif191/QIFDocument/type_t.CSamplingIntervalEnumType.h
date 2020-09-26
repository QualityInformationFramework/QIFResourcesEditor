#pragma once



namespace qif191
{

namespace t
{	

class CSamplingIntervalEnumType : public TypeBase
{
public:
	QIF191_EXPORT CSamplingIntervalEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSamplingIntervalEnumType(CSamplingIntervalEnumType const& init);
	void operator=(CSamplingIntervalEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CSamplingIntervalEnumType); }

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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSamplingIntervalEnumType
