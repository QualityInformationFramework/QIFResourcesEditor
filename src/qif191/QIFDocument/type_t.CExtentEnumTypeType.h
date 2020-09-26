#pragma once



namespace qif191
{

namespace t
{	

class CExtentEnumTypeType : public TypeBase
{
public:
	QIF191_EXPORT CExtentEnumTypeType(xercesc::DOMNode* const& init);
	QIF191_EXPORT CExtentEnumTypeType(CExtentEnumTypeType const& init);
	void operator=(CExtentEnumTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_t_altova_CExtentEnumTypeType); }

	enum EnumValues {
		Invalid = -1,
		k_ALLOVER = 0, // ALLOVER
		k_ALLAROUND = 1, // ALLAROUND
		k_ALLOVERTHISSIDE = 2, // ALLOVERTHISSIDE
		k_ALLAROUNDTHISSIDE = 3, // ALLAROUNDTHISSIDE
		k_UNDEFINED = 4, // UNDEFINED
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

//#endif // _ALTOVA_INCLUDED_QIFDocument_ALTOVA_t_ALTOVA_CExtentEnumTypeType
