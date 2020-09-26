#pragma once



namespace qif191
{

namespace t
{	

class CAssignableCauseEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CAssignableCauseEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CAssignableCauseEnumTypeType(CAssignableCauseEnumTypeType const& init);
	void operator=(CAssignableCauseEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CAssignableCauseEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_POWER_FAILURE = 0, // POWER_FAILURE
		k_BROKEN_TOOL = 1, // BROKEN_TOOL
		k_COMPUTER_CRASH = 2, // COMPUTER_CRASH
		k_WEATHER_EVENT = 3, // WEATHER_EVENT
		k_OTHER = 4, // OTHER
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CAssignableCauseEnumTypeType
