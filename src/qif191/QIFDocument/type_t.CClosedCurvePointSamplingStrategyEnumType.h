#pragma once



namespace qif191
{

namespace t
{	

class CClosedCurvePointSamplingStrategyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CClosedCurvePointSamplingStrategyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CClosedCurvePointSamplingStrategyEnumType(CClosedCurvePointSamplingStrategyEnumType const& init);
	void operator=(CClosedCurvePointSamplingStrategyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CClosedCurvePointSamplingStrategyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_POINTS = 0, // POINTS
		k_EQUIDISTANT = 1, // EQUIDISTANT
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CClosedCurvePointSamplingStrategyEnumType
