#pragma once



namespace qif191
{

namespace t
{	

class CTopologyEnumType : public TypeBase
{
public:
	QIF191_EXPORT CTopologyEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CTopologyEnumType(CTopologyEnumType const& init);
	void operator=(CTopologyEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CTopologyEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_UNKNOWN = 0, // UNKNOWN
		k_PRESENT = 1, // PRESENT
		k_ABSENT = 2, // ABSENT
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CTopologyEnumType
