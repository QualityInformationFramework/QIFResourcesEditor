#pragma once



namespace qif191
{

namespace t
{	

class CMaterialModifierEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CMaterialModifierEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CMaterialModifierEnumTypeType(CMaterialModifierEnumTypeType const& init);
	void operator=(CMaterialModifierEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CMaterialModifierEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_REGARDLESS = 0, // REGARDLESS
		k_LEAST = 1, // LEAST
		k_MAXIMUM = 2, // MAXIMUM
		k_NONE = 3, // NONE
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CMaterialModifierEnumTypeType
