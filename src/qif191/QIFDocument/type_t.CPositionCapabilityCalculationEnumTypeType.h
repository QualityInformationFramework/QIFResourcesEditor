#pragma once



namespace qif191
{

namespace t
{	

class CPositionCapabilityCalculationEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CPositionCapabilityCalculationEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPositionCapabilityCalculationEnumTypeType(CPositionCapabilityCalculationEnumTypeType const& init);
	void operator=(CPositionCapabilityCalculationEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPositionCapabilityCalculationEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_THREE_SIGMA = 0, // THREE_SIGMA
		k_SIX_SIGMA = 1, // SIX_SIGMA
		k_BIVARIATE = 2, // BIVARIATE
		k_TRIVARIATE = 3, // TRIVARIATE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPositionCapabilityCalculationEnumTypeType
