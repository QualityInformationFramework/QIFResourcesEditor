#pragma once



namespace qif191
{

namespace t
{	

class CGDTEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CGDTEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CGDTEnumTypeType(CGDTEnumTypeType const& init);
	void operator=(CGDTEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CGDTEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_UNKNOWN = 0, // UNKNOWN
		k_HUMANREAD = 1, // HUMANREAD
		k_MACHINEREAD = 2, // MACHINEREAD
		k_ABSENT = 3, // ABSENT
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CGDTEnumTypeType
