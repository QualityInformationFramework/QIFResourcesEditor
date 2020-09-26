#pragma once



namespace qif191
{

namespace t
{	

class CPointPointSamplingStrategyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CPointPointSamplingStrategyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPointPointSamplingStrategyEnumType(CPointPointSamplingStrategyEnumType const& init);
	void operator=(CPointPointSamplingStrategyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CPointPointSamplingStrategyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_POINTS = 0, // POINTS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPointPointSamplingStrategyEnumType
