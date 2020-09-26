#pragma once



namespace qif191
{

namespace t
{	

class CListAccumulatedStatsValuesType : public TypeBase
{
public:
	QIF191_EXPORT CListAccumulatedStatsValuesType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CListAccumulatedStatsValuesType(CListAccumulatedStatsValuesType const& init);
	void operator=(CListAccumulatedStatsValuesType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CListAccumulatedStatsValuesType); }
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CListAccumulatedStatsValuesType
