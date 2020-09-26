#pragma once



namespace qif191
{

namespace t
{	

class CMeasureActionGroupFunctionEnumType : public TypeBase
{
public:
	QIF191_EXPORT CMeasureActionGroupFunctionEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasureActionGroupFunctionEnumType(CMeasureActionGroupFunctionEnumType const& init);
	void operator=(CMeasureActionGroupFunctionEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CMeasureActionGroupFunctionEnumType); }

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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasureActionGroupFunctionEnumType
