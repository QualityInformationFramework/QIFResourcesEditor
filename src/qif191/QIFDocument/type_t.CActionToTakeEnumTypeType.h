#pragma once



namespace qif191
{

namespace t
{	

class CActionToTakeEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CActionToTakeEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CActionToTakeEnumTypeType(CActionToTakeEnumTypeType const& init);
	void operator=(CActionToTakeEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CActionToTakeEnumTypeType); }

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

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CActionToTakeEnumTypeType
