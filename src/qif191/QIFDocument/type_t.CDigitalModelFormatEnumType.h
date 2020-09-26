#pragma once



namespace qif191
{

namespace t
{	

class CDigitalModelFormatEnumType : public TypeBase
{
public:
	QIF191_EXPORT CDigitalModelFormatEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CDigitalModelFormatEnumType(CDigitalModelFormatEnumType const& init);
	void operator=(CDigitalModelFormatEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CDigitalModelFormatEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_STEPAP203 = 0, // STEPAP203
		k_STEPAP203E2 = 1, // STEPAP203E2
		k_STEPAP214 = 2, // STEPAP214
		k_STEPAP242 = 3, // STEPAP242
		k_JTOPEN = 4, // JTOPEN
		k_RPC = 5, // RPC
		k_PDPMI = 6, // PDPMI
		k_ACIS = 7, // ACIS
		k_PARASOLID = 8, // PARASOLID
		k_AUTODESK = 9, // AUTODESK
		k_PTC = 10, // PTC
		k_NX = 11, // NX
		k_SOLIDWORKS = 12, // SOLIDWORKS
		k_CATIA = 13, // CATIA
		k_NOTDEFINED = 14, // NOTDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CDigitalModelFormatEnumType
