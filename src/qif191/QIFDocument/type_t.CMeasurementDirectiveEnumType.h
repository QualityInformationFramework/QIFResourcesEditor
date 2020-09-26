#pragma once



namespace qif191
{

namespace t
{	

class CMeasurementDirectiveEnumType : public TypeBase
{
public:
	QIF191_EXPORT CMeasurementDirectiveEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMeasurementDirectiveEnumType(CMeasurementDirectiveEnumType const& init);
	void operator=(CMeasurementDirectiveEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CMeasurementDirectiveEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_MINIMUM = 0, // MINIMUM
		k_MAXIMUM = 1, // MAXIMUM
		k_AVERAGE = 2, // AVERAGE
		k_UNDEFINED = 3, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMeasurementDirectiveEnumType
