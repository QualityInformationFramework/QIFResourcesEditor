#pragma once



namespace qif191
{

namespace t
{	

class CCharacteristicStatusEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CCharacteristicStatusEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CCharacteristicStatusEnumTypeType(CCharacteristicStatusEnumTypeType const& init);
	void operator=(CCharacteristicStatusEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CCharacteristicStatusEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_PASS = 0, // PASS
		k_FAIL = 1, // FAIL
		k_REWORK = 2, // REWORK
		k_SYSERROR = 3, // SYSERROR
		k_INDETERMINATE = 4, // INDETERMINATE
		k_NOT_ANALYZED = 5, // NOT_ANALYZED
		k_BASIC = 6, // BASIC
		k_UNDEFINED = 7, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CCharacteristicStatusEnumTypeType
