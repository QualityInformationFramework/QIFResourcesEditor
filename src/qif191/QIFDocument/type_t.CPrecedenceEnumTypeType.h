#pragma once



namespace qif191
{

namespace t
{	

class CPrecedenceEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CPrecedenceEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CPrecedenceEnumTypeType(CPrecedenceEnumTypeType const& init);
	void operator=(CPrecedenceEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CPrecedenceEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_PRIMARY = 0, // PRIMARY
		k_SECONDARY = 1, // SECONDARY
		k_TERTIARY = 2, // TERTIARY
		k_QUATERNARY = 3, // QUATERNARY
		k_QUINARY = 4, // QUINARY
		k_SENARY = 5, // SENARY
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CPrecedenceEnumTypeType
