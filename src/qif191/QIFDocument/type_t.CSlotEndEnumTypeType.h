#pragma once



namespace qif191
{

namespace t
{	

class CSlotEndEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CSlotEndEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSlotEndEnumTypeType(CSlotEndEnumTypeType const& init);
	void operator=(CSlotEndEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSlotEndEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ROUND = 0, // ROUND
		k_FLAT = 1, // FLAT
		k_OPEN = 2, // OPEN
		k_UNDEFINED = 3, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSlotEndEnumTypeType
