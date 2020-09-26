#pragma once



namespace qif191
{

namespace t
{	

class CISODegreeOfFreedomEnumType : public TypeBase
{
public:
	QIF191_EXPORT CISODegreeOfFreedomEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CISODegreeOfFreedomEnumType(CISODegreeOfFreedomEnumType const& init);
	void operator=(CISODegreeOfFreedomEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CISODegreeOfFreedomEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_Rx = 0, // Rx
		k_Ry = 1, // Ry
		k_Rz = 2, // Rz
		k_Tx = 3, // Tx
		k_Ty = 4, // Ty
		k_Tz = 5, // Tz
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CISODegreeOfFreedomEnumType
