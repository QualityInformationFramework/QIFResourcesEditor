#pragma once



namespace qif191
{

namespace t
{	

class CInspectionModeEnumType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionModeEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionModeEnumType(CInspectionModeEnumType const& init);
	void operator=(CInspectionModeEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CInspectionModeEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_FAI_Full = 0, // FAI_Full
		k_FAI_Partial = 1, // FAI_Partial
		k_100Percent = 2, // 100Percent
		k_APQP = 3, // APQP
		k_KPC = 4, // KPC
		k_PPAP = 5, // PPAP
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionModeEnumType
