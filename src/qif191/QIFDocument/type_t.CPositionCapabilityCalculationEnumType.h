#pragma once



namespace qif191
{

namespace t
{	

class CPositionCapabilityCalculationEnumType : public TypeBase
{
public:
	QIF191_EXPORT CPositionCapabilityCalculationEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCapabilityCalculationEnumType(CPositionCapabilityCalculationEnumType const& init);
	void operator=(CPositionCapabilityCalculationEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CPositionCapabilityCalculationEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_THREE_SIGMA = 0, // THREE_SIGMA
		k_SIX_SIGMA = 1, // SIX_SIGMA
		k_BIVARIATE = 2, // BIVARIATE
		k_TRIVARIATE = 3, // TRIVARIATE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCapabilityCalculationEnumType
