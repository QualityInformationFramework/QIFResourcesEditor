#pragma once



namespace qif191
{

namespace t
{	

class CActionToTakeEnumType : public TypeBase
{
public:
	QIF191_EXPORT CActionToTakeEnumType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionToTakeEnumType(CActionToTakeEnumType const& init);
	void operator=(CActionToTakeEnumType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_t_altova_CActionToTakeEnumType); }

	enum EnumValues {
		Invalid = -1,
		k_HALT_PRODUCTION = 0, // HALT_PRODUCTION
		k_CONTAINMENT = 1, // CONTAINMENT
		k_NEW_MATERIAL_BATCH = 2, // NEW_MATERIAL_BATCH
		k_NEW_TOOLING = 3, // NEW_TOOLING
		k_INSPECT_100PC = 4, // INSPECT_100PC
		k_REBOOT = 5, // REBOOT
		k_RECALIBRATE = 6, // RECALIBRATE
		k_OTHER = 7, // OTHER
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionToTakeEnumType
