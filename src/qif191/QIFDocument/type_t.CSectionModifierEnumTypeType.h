#pragma once



namespace qif191
{

namespace t
{	

class CSectionModifierEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CSectionModifierEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CSectionModifierEnumTypeType(CSectionModifierEnumTypeType const& init);
	void operator=(CSectionModifierEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CSectionModifierEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ACS = 0, // ACS
		k_ALS = 1, // ALS
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CSectionModifierEnumTypeType
