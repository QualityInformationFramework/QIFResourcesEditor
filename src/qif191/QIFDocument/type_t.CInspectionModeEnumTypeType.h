#pragma once



namespace qif191
{

namespace t
{	

class CInspectionModeEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CInspectionModeEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CInspectionModeEnumTypeType(CInspectionModeEnumTypeType const& init);
	void operator=(CInspectionModeEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CInspectionModeEnumTypeType); }

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

	
	QIF191_EXPORT int GetEnumerationValue();
	QIF191_EXPORT void SetEnumerationValue( const int index);
	QIF191_EXPORT void operator=(const string_type& value);
	QIF191_EXPORT operator string_type();
	QIF191_EXPORT void SetXsiType();
};



} // namespace t

}	// namespace qif191

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CInspectionModeEnumTypeType
