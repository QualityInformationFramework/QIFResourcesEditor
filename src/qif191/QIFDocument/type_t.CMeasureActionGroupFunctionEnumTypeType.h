#pragma once



namespace qif191
{

namespace t
{	

class CMeasureActionGroupFunctionEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CMeasureActionGroupFunctionEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureActionGroupFunctionEnumTypeType(CMeasureActionGroupFunctionEnumTypeType const& init);
	void operator=(CMeasureActionGroupFunctionEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMeasureActionGroupFunctionEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ROUTING_PLAN = 0, // ROUTING_PLAN
		k_OPERATION_SEQUENCE = 1, // OPERATION_SEQUENCE
		k_SETUP_USAGE_GROUP = 2, // SETUP_USAGE_GROUP
		k_SENSOR_USAGE_GROUP = 3, // SENSOR_USAGE_GROUP
		k_CARRIAGE_USAGE_GROUP = 4, // CARRIAGE_USAGE_GROUP
		k_PCS_USAGE_GROUP = 5, // PCS_USAGE_GROUP
		k_EVALUATE_CHAR_ACTIONS = 6, // EVALUATE_CHAR_ACTIONS
		k_ESTABLISH_DATUM_ACTIONS = 7, // ESTABLISH_DATUM_ACTIONS
		k_UNDEFINED = 8, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureActionGroupFunctionEnumTypeType
